#include <stdio.h>
    int swap (void);
    int x , y ;
	int z;
int  main()
{
	   
		printf("please enter value frist before swap\n");
		scanf("%d" , &x);
		printf("please enter value scand before swap:\n");
		scanf("%d" , &y);
		 swap ();
		printf("please enter value frist after swap:%d\n" ,x );
		printf("please enter value scand after swap:%d\n" ,y );
	
}  
int swap (void)
{
	z = x;
	x = y;
	y = z;
	    
}