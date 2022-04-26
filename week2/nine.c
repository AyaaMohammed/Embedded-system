#include <stdio.h>

int  main(){ 
int i=1 , n , fact=1;
printf("enter the number: "); 
scanf("%d",&n);
if(n>0){
	while(i<=n){
		fact *=i;
		i++;
	}
	printf("the factorial of %d=%d ",n,fact); 
}
else{
	printf("Error,number must be postive..");
}
}