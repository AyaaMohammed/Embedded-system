#include <stdio.h>
#include<stdlib.h>
	typedef struct{
		int programming;
		int data_struction;
		int discrete_math;
		int algorithms;
		int id;
	}St_Grade;
	
	int main(){
		int ID ,k=1;
		St_Grade array[3];
		for(int i=0 ;i<3 ; i++)
		{			     
	                printf("grades of student %d :\n",i+1);
					printf("please enter student id:\n");
		            scanf("%d",&array[i].id);
				    printf("programming grade:\n");
				    scanf("%d",&array[i].programming);
				    printf("data_struction grade:\n");
				    scanf("%d",&array[i].data_struction);
				    printf("discrete_math grade:\n");
				    scanf("%d",&array[i].discrete_math);
				    printf("algorithms grade:\n");
				    scanf("%d",&array[i].algorithms);			   
		
		}
				   
	                printf("please enter student id:\n");
		            scanf("%d",&ID);
                    for(int i=0 ;i<3 ; i++)
		            {	 					
					if(ID == array[i].id){
					printf("grades of student %d :\n",i+1);
				    printf("programming grade:%d\n",array[i].programming);				   
				    printf("data_struction grade:%d\n",array[i].data_struction);				   
				    printf("discrete_math grade:%d\n",array[i].discrete_math);				   
				    printf("algorithms grade:%d\n",array[i].algorithms);
                    k=0; 					
		            }						
					}	
					if(k==1){
						printf("wrong id");
					}
		            
		
		
        
	}