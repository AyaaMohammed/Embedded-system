#include <stdio.h>
#include<stdlib.h>

int main(){
	int arr[10],i,j,num,count;
	printf("please enter the number of element of array:");
	scanf("%d",&num);
	printf("please enter the elements of array:\n");
	for(i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}
	printf("all unique elements:\n");
	for(i=0;i<num;i++){
		count=0;
		for(j=i+1;j<num;j++){
			if(arr[i]==arr[j]){
				count++;		
			}
		}
			if(count!=1){
				printf("%d\n",arr[i]);
			}		
	}
}