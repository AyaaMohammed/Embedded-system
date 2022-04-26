#include <stdio.h>
#include<stdlib.h>

int main(){
	int a[5][5],i,j,sum;
	printf("enter element of array 5*5:\n");
	for(i=0;i<5;i++){
		printf("enter row %d:",i+1);
		for(j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}		
	}
	printf("rows total:");
	for(i=0;i<5;i++){		
		for(j=0;j<5;j++){
			sum+=a[i][j];
		}
        printf("%d ",sum); 		
		sum=0;
	}
	printf("\ncolumns total:");
	for(j=0;j<5;j++){		
		for(i=0;i<5;i++){
			sum+=a[i][j];
		}
        printf("%d  ",sum); 		
		sum=0;
	}
	
	
	
}