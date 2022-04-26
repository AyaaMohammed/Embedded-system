#include <stdio.h>
int num ,count;
int Count_Numbers(void);
int main(){
	printf("please enter  number:");
	scanf("%d",&num);
	printf("the number of the digits=%d",Count_Numbers());
}
int Count_Numbers(void){
	for(count=0;num!=0;count++){
		num/=10;
	}
	return count;
}