#include <stdio.h>
#include<stdlib.h>

int main(){
	int i=10;	
	printf("%d\n",i);
	int* ptr=&i;
	*ptr=20;
	printf("%d",i);
	}