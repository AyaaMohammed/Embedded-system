#include <stdio.h>

int  main(){ 
int x,y,z;
printf("enter three numbers:\n");
scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&z);
if (x >= y && x >= z)
{
    printf("max:%d", x);
}  
else if(y >= x && y >= z)
{
     printf("max:%d", y);
} 
else if(z >= x && z >= y)
{
    printf("max:%d", z);
}
}