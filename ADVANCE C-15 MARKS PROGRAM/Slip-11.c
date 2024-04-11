/*
Slip 11
3]Write a program to accept details of n employees (id, name, salary).
Display all the details. Also, search for an employee by name.
*/
#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[20];
	float salary;
}e1[100];
int main()
{
	int i,n;
	printf("ENTER A LIMIT:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nENTER EMPLOYEE ID:");
		scanf("%d",&e1[i].id);
		printf("ENTER EMPLOYEE NAME:");
		scanf("%s",&e1[i].name);
		printf("ENTER EMPLOYEE SALARY:");
		scanf("%f",&e1[i].salary);
	}
	int ch,c=1;
	char s1[20];
	printf("\n1:DISPLAY ALL DETAILS\n2:SEARCH FOR AN EMP NAME");
	printf("\nENTER YOUR CHOICE:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		for(i=0;i<n;i++)
		{
			printf("\nEMPLOYEE ID:%d",e1[i].id);
			printf("\nEMPLOYEE NAME:%s",e1[i].name);
			printf("\nEMPLOYEE SALARY:%f",e1[i].salary);
		}
		break;
		case 2:
			printf("\nENTER EMP NAME FOR SEARCH:");
			scanf(" %s", &s1);
			for(i=0;i<n;i++)
			{
				if(strcmp(e1[i].name,s1)==0)
				{
			c=0;
			printf("\nEMPLOYEE ID:%d",e1[i].id);
			printf("\nEMPLOYEE NAME:%s",e1[i].name);
			printf("\nEMPLOYEE SALARY:%f",e1[i].salary);			
				}
			}
			if(c==1)
			printf("\nNO RECORD FOUND.");
			break;
			default:printf("\nENTER A VALID CHOICE");
}
}
