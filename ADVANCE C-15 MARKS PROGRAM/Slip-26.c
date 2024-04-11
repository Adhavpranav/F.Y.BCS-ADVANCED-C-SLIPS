/*
Slip 26
3]Write a program to create a structure employee (id, name, salary). Accept 
details of n employees and write a menu driven program to perform the 
following operations.
i) Search by name
ii) Display all
*/
#include<stdio.h>
struct employee
{
	int id,salary;
	char name[20];
}e1[100];
int main()
{
	int i,n,ch;
	char s1[20];
	printf("\nENTER LIMIT:");
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
	do{
	printf("\n1:SEARCH BY NAME\n2:DISPLAY ALL");
	printf("\nENTER CHOICE:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nENTER NAME FOR SEARCH:");
			scanf(" %s",&s1);
			for(i=0;i<n;i++)
			{
				if(strcmp(e1[i].name,s1)==0)
				{
					printf("\nID:%d",e1[i].id);
					printf("\nNAME:%s",e1[i].name);
					printf("\nSALARY:%d",e1[i].salary);
					printf("\n");
				}
			}
			break;
		case 2:
				for(i=0;i<n;i++)
			{
					printf("\nID:%d",e1[i].id);
					printf("\nNAME:%s",e1[i].name);
					printf("\nSALARY:%d",e1[i].salary);
					printf("\n");
			}
			break;
			default:printf("\nINVALID CHOICE");
			
	}
	}while(ch==1||2);
}
