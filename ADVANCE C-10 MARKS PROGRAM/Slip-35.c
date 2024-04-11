/*
Slip 35
2]Write a program to accept and display details of 5 employees (id, 
name, salary) using structure
*/
#include<stdio.h>
struct employee
{
	int id,salary;
	char name[20];
}e1[5];
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\nENTER ID:");
		scanf("%d",&e1[i].id);
		printf("ENTER NAME:");
		scanf("%s",&e1[i].name);
		printf("ENTER SALARY:");
		scanf("%d",&e1[i].salary);
	}
	printf("\nDETAILS OF EMPLOYEE:\n");
	for(i=0;i<5;i++)
	{
		printf("\nID:%d",e1[i].id);
		printf("\nNAME:%s",e1[i].name);
		printf("\nSALARY:%d",e1[i].salary);
		printf("\n");	
	}
}

