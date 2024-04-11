/*
Slip 33
2]Write a program to accept n integers and calculate their sum and 
average. Use dynamic memory allocation.
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
	printf("\nAVG OF ELEMENTS:%f",avg);
}

