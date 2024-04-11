/*
Slip 30
3]Create a structure employee (id, name, salary). Accept details of n 
employees and find the details of employee having maximum salary. 
Write separate function
*/
#include<stdio.h>
struct employee
{
	int id,salary;
	char name[20];
}e1[100];
void disp(struct employee e1[100],int n);
int main()
{
	int i,n;
	printf("ENTER A LIMIT:");
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
	disp(e1,n);
}
void disp(struct employee e1[100],int n)
{
	int i,index=0;
	for(i=0;i<n;i++)
	{
		if(e1[i].salary>e1[index].salary)
		index=i;
	}
	printf("\nDETAILS OF MAX SALARY PERSON:");
	printf("\nID:%d",e1[index].id);
	printf("\nNAME:%s",e1[index].name);
	printf("\nSALARY:%d",e1[index].salary);
}

