#include <stdio.h>

int  main(){ 
int n , k=1;
 while(k){
  printf("enter result 3*4:");
  scanf("%d",&n);
  if(n==12){
	printf("thanks");
	k=0;
  }
   else{
	printf("try again\n");
  }
}
}