#include <stdio.h>

int  main(){  
 int hour;
 float salary=0;
 printf("enter the working hours:"); 
 scanf("%d",&hour);
 if(hour>40){
	 salary=50*hour;
 }
 else{
	 salary=50*hour*0.9;
 }
 printf("the Salary:%0.2f",salary); 
}