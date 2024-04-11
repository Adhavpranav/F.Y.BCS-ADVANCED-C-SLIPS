/*
Slip 3
2]Write a program to allocate memory dynamically for n integers. 
Accept the elements and calculate their sum and average.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*a,s=0,i;
	float avg;
	printf("ENTER LIMIT:");
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("ENTER ELEMENTS:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s=s+*a;
		a++;
	}
	printf("\nSUM OF ELEMENTS:%d",s);
	avg=(float)s/n;
	printf("\nANG OF ELEMENTS:%f",avg);
}
