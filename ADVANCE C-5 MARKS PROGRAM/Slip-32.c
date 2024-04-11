/*
Slip 32
1]Write a program to sum of all numbers in an array using pointer
*/
#include<stdio.h>
int main()
{
	int *ptr,n,a[20],add=0,i;
	printf("ENTER LIMIT:");
	scanf("%d",&n);
	printf("\nENTER ELEMENTS OF AN ARRAY:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(ptr=a,i=0;i<n;i++)
	{
		add=add+*ptr;
		ptr++;
	}
	printf("\nADDTION OF ELEMENTS OF AN ARRAY:%d",add);
}
