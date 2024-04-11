/*
Slip 33
1]Write a program using macro to find maximum of two numbers.
*/
#include<stdio.h>
#define MAX(a,b) a>b?a:b
int main()
{
	int a,b;
	printf("ENTER TWO NO:");
	scanf("%d%d",&a,&b);
	printf("\nMAXIMUM NO IS:%d",MAX(a,b));
}

