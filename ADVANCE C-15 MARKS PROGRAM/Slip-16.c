/*
Slip 16
3]Write a program to accept ‘n’ employee details (eno, ename, salary) and 
display all employee details whose salary is more than 10000, by passing 
array of structure to the function.
*/
#include<stdio.h>
struct employee
{
	int eno,salary;
	char ename[20];
}e1[100];
void disp(struct employee e1[100],int n);
int main()
{
	int i,n;
	printf("\nENTER LIMIT:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nENTER ENO:");
		scanf("%d",&e1[i].eno);
		printf("ENTER NAME:");
		scanf("%s",&e1[i].ename);
		printf("ENTER SALARY:");
		scanf("%d",&e1[i].salary);
	}
	disp(e1,n);
}
void disp(struct employee e1[100],int n)
{
	int i,c=1;
	for(i=0;i<n;i++)
	{
		if(e1[i].salary>10000)
		{
			c=0;
			printf("\nENO:%d",e1[i].eno);
			printf("\nNAME:%s",e1[i].ename);
			printf("\nSALARY:%d",e1[i].salary);
		}
	}
	if(c==1)
	printf("\nNO RECORD FOUND");
}
