#include<stdio.h>
int main(){
	char x =7;
	char y =4;
	int or = x|y;
	int and = x&y;
	int xor = x^y;
	int shift_left = x<<1; //multiply by 2
    int shift_right= x>>2; // divide by 2
    printf("or: %d\n",or);
    printf("and: %d\n",and);
    printf("xor:%d\n",xor);
    printf("shift_left:%d\n",shift_left);
	printf("shift_right:%d\n",shift_right);

	
}