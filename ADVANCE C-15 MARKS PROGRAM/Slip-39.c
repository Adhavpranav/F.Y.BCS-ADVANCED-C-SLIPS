/*
Slip 39
3]Write a C program to create structure employee (id, name, salary). Accept 
details of n employees and perform the following operations:
a. Display all employees.
b. Display details of all employees having salary >_____
*/
#include<stdio.h>
struct employee
{
	int id,salary;
	char name[20];
}e1[100];
int main()
{
	int i,n;
	printf("ENTER LIMIT:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nENTER ID:");
		scanf("%d",&e1[i].id);
		printf("ENTER NAME:");
		scanf("%s",&e1[i].name);
		printf("ENTER SALARY:");
		scanf("%d",&e1[i].salary);
	}
	printf("\na:DISPLAY ALL EMPLOYEE\nb:DISPLAY DETAILS OF ALL EMP HAVING SALARY >----");
	char ch;
	int s;
	printf("\nENTER CHOICE:");
	scanf(" %c",&ch);
	switch(ch)
	{
		case 'a':
			printf("\nALL DETAILS OF EMP:");
			for(i=0;i<n;i++)
			{
				printf("\nID:%d",e1[i].id);
				printf("\nNAME:%s",e1[i].name);
				printf("\nSALARY:%d",e1[i].salary);
				printf("\n");
			}
			break;
		case 'b':
			printf("\nENTER SALARY:");
			scanf("%d",&s);
			for(i=0;i<n;i++)
			{
				if(e1[i].salary>s)
				{
				printf("\nID:%d",e1[i].id);
				printf("\nNAME:%s",e1[i].name);
				printf("\nSALARY:%d",e1[i].salary);
				printf("\n");
				}
			}
	}
}

