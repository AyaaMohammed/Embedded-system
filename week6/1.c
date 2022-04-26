#include <stdio.h>

typedef struct employees{
	 int salary;
	 int Bonus;
	 int Deduction;
  }st_employees;
  st_employees s1;
  st_employees s2;
  st_employees s3;
int main(){
	printf("please enter moshan salary:\n");
	scanf("%d",&s1.salary);
	printf("please enter moshan Bonus:\n");
	scanf("%d",&s1.Bonus);
	printf("please enter moshan Deduction:\n");
	scanf("%d",&s1.Deduction);
	printf("please enter maged salary:\n");
	scanf("%d",&s2.salary);
	printf("please enter maged Bonus:\n");
	scanf("%d",&s2.Bonus);
	printf("please enter maged Deduction:\n");
	scanf("%d",&s2.Deduction);
	printf("please enter mariam salary:\n");
	scanf("%d",&s3.salary);
	printf("please enter mariam Bonus:\n");
	scanf("%d",&s3.Bonus);
	printf("please enter mariam Deduction:\n");
	scanf("%d",&s3.Deduction);
	int sum =s1.salary + s1.Bonus -s1.Deduction +s2.salary+ s2.Bonus -s2.Deduction+s3.salary+s3.Bonus-s3.Deduction;
	printf("total value needed is:%d",sum);
}