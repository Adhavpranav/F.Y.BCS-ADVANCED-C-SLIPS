/*
Slip 30
2]Write a program to display the elements of an array containing n 
integers in the reverse order using a pointer to the array
*/
#include<stdio.h>
int main()
{
	int n,a[20],*ptr,i;
	printf("ENTER LIMIT:");
	scanf("%d",&n);
	printf("\nENTER ELEMENTS OF AN ARRAY:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nARRAY ELEMENTS IN REV ORDER:");
	for(ptr=&a[n-1],i=0;i<n;i++)
	{
		printf("\t%d",*ptr);
		ptr--;
	}
}
