#include <stdio.h>
int a=0,b=1,result,num;
int Fibonacci(void);
int main(){
	printf("please enter number:");
	scanf("%d",&num);
	Fibonacci();
}
int Fibonacci(void){
	for(int i=0;i<=num;i++){
		printf("%d ",a);
		result=a+b;
		a=b;
		b=result;
	}
}