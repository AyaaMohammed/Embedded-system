#include <stdio.h>
#include<stdlib.h>

int main(){
	int arr[10],i,j,num;
	printf("please enter the number of element of array:");
	scanf("%d",&num);
	printf("please enter the elements of array:\n");
	for(i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}
	int one =arr[0] , two=arr[0];
    for(i=0;i<num;i++){
       if(arr[i]>one){
           two=one;
           one=arr[i];
        }
    else if (arr[i]>two&&arr[i]<one){
          two=arr[i];
        }
    }
     printf("the second largest element :%d",two);
   

	
}