//Michael Alsbergas, 5104112
//This program is used to calculate the fibonacci or factorial of a given number.

#include <stdlib.h> 
#include <stdio.h> 

void fibonacci(int num);
void factorial(int num);

void main(int argc, char *argv[]){

char isFib[]={'f','i','b','o','n','a','c','c','i'};
char isFac[]={'f','a','c','t','o','r','i','a','l'}; 
int a = 0;


int i;
for(i = 0; i < 9; i++){
	if(argv[1][i] != isFib[i] & argv[1][i] != isFac[i]){
		i = 9;
		printf("Invalid Parameters \n"); 
		a = 1;}
	}
	
if(a == 0){
	if(argv[1][1] == 'i') 
		fibonacci(atoi(argv[2]));
	if(argv[1][1] == 'a') 
		factorial(atoi(argv[2])); 
}
} 

void fibonacci(int num){
long long a = 0;
long long b = 1;
long long temp = 1; 

int i;
for(i = 1; i < num ; i++){
	temp = b;
	b = a + b; 
	a = temp; 
	}
	
printf("fib( \%i ) = \%li \n", num, b);
}

void factorial(int num){
long long a = 1;

int i;
for(i = 1; i < num+1 ; i++){
	a = a * i;
}

printf("\%i ! = \%li \n", num, a);
}