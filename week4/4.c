#include <stdio.h>
#include<stdlib.h>

int arr[10],i,j,num;
int fun(int arr[],int num);

int main(){	
	printf("please enter the number of element of array:");
	scanf("%d",&num);
	printf("please enter the elements of array:\n");
	for(i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}	
	fun(arr,num);
}
int fun(int arr[],int num){
	printf("all repeating elements:\n");
	for(i=0;i<num;i++){		
		for(j=i+1;j<num;j++){
			if(arr[i]==arr[j]){			
				printf("%d\n",arr[i]);
			}	
		}			
	}
}