#include <stdio.h>
#include<stdlib.h>
#include <string.h>
void Login(void);
char name[50];
int pass;
int main(){
	Login();
}
void Login(void){
	while(1){
	printf("please enter your name:");
	scanf("%s",&name);
    printf("please enter your pass:");
	scanf("%d",&pass);
	if(!strcmp(name,"aya")){
		if(pass==1234){
			printf("Welcome ,You Are Registered");
			break;
		}
	}
	else{
		printf("wrong in name or password...\n");
	}
	}
}