#include <stdio.h>
int x,y;
int Get_Max(int  x, int y);
int  main(){ 
printf("enter two number:\n");
scanf("%d",&x);
scanf("%d",&y);
printf("max=%d",Get_Max(x,y));
}
int Get_Max(int x,int y){
if (x > y )
{
    return x;
}  
else if(y > x )
{
     return y;
}
else{
	printf("x equal y");
}
}
