/*
Slip 26
2]Write a program in C to display the contents of an array in the reverse 
order using pointer.
*/
#include<stdio.h>
int main()
{
	int i,a[100],n,*ptr;
	printf("\nENTER A LIMIT:");
	scanf("%d",&n);
	printf("\nENTER ELEMENTS:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nELEMENTS OF AN ARRAY IN REVERSE ORDER:");
	for(ptr=&a[n-1],i=0;i<n;i++)
	{
		printf("%d\t",*ptr);
		ptr--;
	}
}

