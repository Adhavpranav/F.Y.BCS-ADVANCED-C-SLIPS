/*
Slip 15
1]Write a C program to store the information of one person as his 
Pancard number or Aadhar card number using union
*/
#include<stdio.h>
struct person
{
	char name[20];
	union card
	{
		char pancard[20],aadhar[20];
	}u1;
}s1;
int main()
{
	int ch;
	printf("\nENTER NAME:");
	scanf("%s",&s1.name);
	printf("\n1:PANCARD\n2:AADHARCARD");
	printf("\nENTER CHOICE:");
	scanf("%d",&ch);
	if(ch==1)
	{
	printf("\nENTER PANCARD NO:");
	scanf("%s",&s1.u1.pancard);
	}
	else if(ch==2)
	{
	printf("\nENTER AADHARCARD NO:");
	scanf("%s",&s1.u1.aadhar);
	}
	else
	printf("\nINVALID CHOICE");
}

