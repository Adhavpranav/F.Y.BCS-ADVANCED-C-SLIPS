/*
Slip 19
2]Write a program to accept details of n items (code, name, price) 
using structure and display the details.
*/
#include<stdio.h>
struct item
{
	char code[20],name[20];
	int price;
}i1[100];
int main()
{
	int i,n;
	printf("ENTER LIMIT:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nENTER CODE OF ITEM:");
		scanf("%s",&i1[i].code);
		printf("ENTER NAME OF ITEM:");
		scanf("%s",&i1[i].name);
		printf("ENTER PRICE OF ITEM:");
		scanf("%d",&i1[i].price);
	}
	printf("\nDETAILS OF ITEMS:");
	for(i=0;i<n;i++)
	{
		printf("\nCODE:%s",i1[i].code);
		printf("\nNAME:%s",i1[i].name);
		printf("\nPRICE:%d",i1[i].price);
		printf("\n");
	}
}
