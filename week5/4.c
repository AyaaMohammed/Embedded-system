#include <stdio.h>
void sorting(int * ptr);
int i , j , t;
void main(){
	int arr[10];
	printf("Enter element array before sorting:\n");
	for(int i=0 ; i<10 ;i++){
		scanf("%d",&arr[i]);
	}
	sorting(arr);
	printf("Enter element array after sorting:\n");
	for(i=0 ; i<10 ;i++){
		printf("%d\n", arr[i]);
	}
	
}
void sorting(int * ptr){
	for(i=0 ;i<10 ;i++){
		for(j=1+i ; j<10 ; j++){
			if(ptr[i]>ptr[j]){
				t = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = t;
			}
		}
	}
}