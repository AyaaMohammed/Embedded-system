#include <stdio.h>
#include<stdlib.h>

int main(){
	int x=5 , y=8 , z=3;
	int * px=&x;
	int * py=&y;
	int * pz=&z;
	printf("%d  %d  %d  %d  %d  %d  %d  %d  %d\n",x,y,z,px,py,pz,*px,*py,*pz);
	printf("swapping pointers:\n");
	pz=px;
	px=py;
	py=pz;
	printf("%d  %d  %d  %d  %d  %d  %d  %d  %d\n",x,y,z,px,py,pz,*px,*py,*pz);
}