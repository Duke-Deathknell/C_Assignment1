//Michael Alsbergas, 5140112
//This program determines the factors and the prime factors of a given number. 

#include <stdlib.h> 
#include <stdio.h> 

void factor(int num);
void prime(int num);

void main(){
int choice, num;

int i;
for(i = 0 ; i < 1; ){

	printf("1. Factors\n");
	printf("2. Prime Factors\n");
	printf("0. Stop\n");
	scanf("%d", &choice);

	if(choice == 0) 
		i = 1;
	
	if(choice == 1){
		printf("Number to factorize: "); 	
		scanf("%d", &num); 
		factor(num);}//factor
		
	if(choice == 2){
		printf("Number to factorize: "); 	
		scanf("%d", &num); 
		prime(num);}//prime 
	
	}
}

void factor(int num){
int i;

for(i = 1; i< num+1; i++){
	if(num%i == 0)
		printf("%d   ", i);
}	
printf("\n");
}		

void prime(int num){
int i; 
int j;
int boo;

for(i = 1; i< num+1; i++){
	boo = 0;
	if(num%i == 0){
		for(j = 2; j< i; j++){
			if(i%j == 0)
				boo = 1;
		}
		if(boo == 0)
			printf("%d   ", i);
} }
printf("\n");
}