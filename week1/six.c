#include<stdio.h>
int main(){
	int x ,y;
	printf("enter two numbers:");
	scanf("%d",&x);
	scanf("%d",&y);
	printf("logical operation\n");
	printf("x&&y=%d\n",x&&y);
	printf("x||y=%d\n",x||y);
	printf("!(x>y)=%d\n",!(x>y));
	printf("bitwise operation\n");
	printf("x&y=%d\n",x&y);
	printf("x|y=%d\n",x|y);	
	printf("x<<1=%d\n",x<<1);
	printf("x>>2=%d\n",x>>2);
	printf("x^y=%d\n",x^y);
	printf("Arithmetic operation\n");
	printf("x+y=%d\n",x+y);
	printf("x-y=%d\n",x-y);
	printf("x*y=%d\n",x*y);
	printf("x/y=%d\n",x/y);	
}