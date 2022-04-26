#include <stdio.h>

int  main(){ 
 int grade;
 printf("please enter grade:");
 scanf("%d",&grade);
 if(grade>=90){
	 printf("Excellent");
 }
 else if(grade<90&&grade>=80){
	 printf("Very Good");
 }
 else if(grade<80&&grade>=60){
	  printf("Good");
 }
 else if(grade<60){
	 printf("Fail");
 }
}