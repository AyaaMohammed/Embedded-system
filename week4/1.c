#include <stdio.h>
#include<stdlib.h>

int main(){
	int arr[10],i,j,num,x;
	printf("please enter the number of element of array:");
	scanf("%d",&num);
	printf("please enter the elements of array:\n");
	for(i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<num-1;i++){
		for(j=i+1;j<num;j++){
			if(arr[i]>arr[j]){
				int swap=arr[i];
				arr[i]=arr[j];
				arr[j]=swap;
			}
		}
	}
	printf("enter zero for ascending or enter one for descending:");
	scanf("%d",&x);
	switch(x){
	case 0:
	    for(i=0;i<num;i++){
		   printf("%d\n",arr[i]);
	    }
		break;
	case 1:	
	    for(i=num-1;i>=0;i--){
		  printf("%d\n",arr[i]);
	   }
	   break;
	default:
       printf("error");	
	   break;
	}
}











