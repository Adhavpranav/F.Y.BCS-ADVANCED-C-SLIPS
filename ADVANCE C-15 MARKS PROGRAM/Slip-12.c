/*
Slip 12
3]Write a C program to create a structure named book (book_name, 
author_name and price) and display all book details having price >
in a proper format by passing the structure array as function argument
*/
#include<stdio.h>
struct book
{
	char book_name[20],author_name[20];
	int price;
}b1[100];
void disp(struct book b1[100],int n);
int main()
{
	int n,i;
	printf("\nENTER LIMIT:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nENTER NAME OF BOOK:");
		scanf("%s",&b1[i].book_name);
		printf("ENTER AUTHOR NAME:");
		scanf("%s",&b1[i].author_name);
		printf("ENTER PRICE:");
		scanf("%d",&b1[i].price);
	}
	disp(b1,n);
}
void disp(struct book b1[100],int n)
{
	int p,i;
	printf("\nENTER PRICE FOR DISPLAY DETAILS OF BOOK WHOSE PRICE IS GREATER THAN YOUR:");
	scanf("%d",&p);
	printf("\nBOOK NAME\tAUTHOR NAME\tPRICE");
	for(i=0;i<n;i++)
	{
		if(b1[i].price>p)
		{
		printf("\n %s\t%s\t%d",b1[i].book_name,b1[i].author_name,b1[i].price);
		}
	}
}

