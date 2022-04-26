#include <stdio.h>

int  main(){ 
int sum=0 , num,i;
float avarge;
for(i=0;i<10;i++){
	printf("enter %d number:",i+1);
	scanf("%d",&num);
	sum +=num;
}
avarge=sum/10.0;
printf("the sum =%d \nthe avarge=%0.2f",sum,avarge);
}