#include <stdio.h>
#include<stdlib.h>
int sum(int *ptr1,int*ptr2);
int main(){
	int x,y;
	printf("enter two variable:\n");
	scanf("%d",&x);
	scanf("%d",&y);
	int z=sum(&x,&y);
	printf("%d",z);
}
int sum(int *ptr1,int*ptr2){
	int sum =*ptr1 + *ptr2;
	return sum;
}