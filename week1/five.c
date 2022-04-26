#include<stdio.h>
int main(){
	int arr[3];
	int i;
	printf("please enter three numbers:");
	for(i=0 ; i<3;i++){
		scanf("%d",&arr[i]);
	}
	printf("the numbers in reversed order: ");
	for(i=2 ;i>=0 ;i--){
		printf("%d",arr[i]);
	}
	
}