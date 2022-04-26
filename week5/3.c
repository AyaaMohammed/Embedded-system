#include <stdio.h>
#include<stdlib.h>
int multplication_array(int*ptr1,int*ptr2 , int length);
int mult=0,i;
int main(){
	int a[]={3,5,6,8,8};
	int b[]={1,2,4,5,3};
	int length =sizeof(a)/sizeof(a[0]);
	printf("%d",multplication_array(a,b,length));
}
int multplication_array(int*ptr1,int*ptr2 , int length){	
	for(i=0;i<length;i++){
		
		mult+= ptr1[i] * ptr2[i];
	}
	return mult;
}