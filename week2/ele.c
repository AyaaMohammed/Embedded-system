#include <stdio.h>

int  main(){ 
int row , col ,num , k;
printf("enter number of height:");
scanf("%d",&num);
for(row =1;row<=num ;row++){
	for(k=1;k<=num-row;k++){
		printf(" ");
	}
	for(col=1;col<=2*row-1;col++){
		printf("*");
	}
	printf("\n");
}
}