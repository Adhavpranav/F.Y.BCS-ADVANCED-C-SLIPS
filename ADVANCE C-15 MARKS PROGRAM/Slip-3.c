/*
Slip 3
3]Write a program to declare a structure person (name, address) which 
contains another structure birthdate (day, month, year). Accept the details
of n persons and display them.
*/
#include<stdio.h>
struct person
{
	char name[20],address[20];
	struct birthdate
	{
		int day,month,year;
	}b1;
}p1[100];
int main()
{
	int i,n;
	printf("ENTER A LIMIT:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nENTER NAME OF PERSON:");
		scanf("%s",&p1[i].name);
		printf("ENTER ADDRESS OF PERSON:");
		scanf("%s",&p1[i].address);
		printf("ENTER DAY FROM BIRTH DATE:");
		scanf("%d",&p1[i].b1.day);
		printf("ENTER MONTH FROM BIRTH DATE:");
		scanf("%d",&p1[i].b1.month);
		printf("ENTER YEAR FROM BIRTH DATE:");
		scanf("%d",&p1[i].b1.year);
	}
	printf("\nINFORMATION OF PERSONS:");
	for(i=0;i<n;i++)
	{
		printf("\nNAME OF PERSON:%s",p1[i].name);
		printf("\nADDRESS OF PERSON:%s",p1[i].address);
	printf("\nBIRTH DATE OF PERSON:%d/%d/%d",p1[i].b1.day,p1[i].b1.month,p1[i].b1.year);						
	}
}
