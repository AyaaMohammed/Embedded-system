#include<stdio.h>
int main(){
	float amount; 
	printf("Enter an amount:");
	scanf("%f",&amount);
	amount = amount + amount*0.05;
	
	printf("With tax added:$%0.2f",amount);
}