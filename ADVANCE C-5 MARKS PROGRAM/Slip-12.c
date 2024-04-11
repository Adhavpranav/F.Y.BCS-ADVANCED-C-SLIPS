/*
Slip 12
1]Write a C program to interchange two numbers using pointers
*/
#include<stdio.h>
int main()
{
	int a,b,*p=&a,*q=&b,t;
	printf("ENTER FIRST NO:");
	scanf("%d",&a);
	printf("ENTER SECOND NO:");
	scanf("%d",&b);
	printf("\nBEFORE SWAPPING:\nA=%d\nB=%d",a,b);
	t=*p;
	*p=*q;
	*q=t;
	printf("\nAFTER SWAPPING:\nA=%d\nB=%d",a,b);
}

