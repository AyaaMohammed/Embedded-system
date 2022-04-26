#include <stdio.h>

int  main(){ 
 int k=1 , id ,pass;
 while(k)
{
	 printf("enter your id:");
	 scanf("%d",&id);
	 if(id==123){
		 k=0;
		 for(int i=1;i<=3;i++){
			 printf("enter your pass:");
	         scanf("%d",&pass);
			 if(pass==345){
				  printf("welcome aya");
				  break;
			 }
			 else{		
			       if(i==3){
					    printf("you are not registered");	
						break;
				   }
				   printf("try again\n");				  
			 }
		 }
	 }
	 else{
		  printf("try again\n");
	 }
 }
}