/*
Slip 13
2]Write a C program to accept names of n cities and search for city 
named “Pune”
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20][100];
	int i,n,c=1;
	printf("ENTER A LIMIT:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nENTER NAMES OF CITY:");
		scanf("%s",&s1[i]);
	}
	for(i=0;i<n;i++)
	{
		if(strcmp(s1[i],"pune")==0)
		{
		printf("\nCITY PUNE WAS FOUND.");
		c=0;
		break;
		}
	}
	if(c==1)
	printf("\nCITY PUNE NOT FOUND");
}
