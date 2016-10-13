//Michael Alsbergas, 5104112 
//This program takes in a fraction and reduces it to it's lowest form. 

#include <stdlib.h> 
#include <stdio.h> 

void main(){
int num;
int denom = 1;

int i;
for(i = 0 ; i < 1; ){
	denom = 1;

	printf("Enter fraction (0 to exit): ");
	scanf("%d/%d", &num, &denom);
	
	if(num == 0) 
		i = 1;
	
	if(num != 0){
		int gcd = 1;
		int j;
		for(j=1; j<num+1 & j<denom+1 ; j++){
			if(num%j == 0 & denom%j == 0)
				gcd = j;
		}
		printf("%d/%d \n", num/gcd, denom/gcd); 
	}
	
}
}
