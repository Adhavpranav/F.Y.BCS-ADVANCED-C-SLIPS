/*
Slip 13
1]Write a C program to define a macro MAX which gives the 
maximum of two numbers. Use this macro to find the maximum of 
three numbers.
*/
#include<stdio.h>
#define MAX(a,b) a>b?a:b
int main()
{
	int a,b,c,m,d;
	printf("\nENTER THREE NO:");
	scanf("%d%d%d",&a,&b,&c);
	m=MAX(a,b);
	d=MAX(m,c);
	printf("\nMAX NO IS:%d",d);
}
