/*
Slip 35
1]Write a program to interchange two numbers using pointers.
*/
#include<stdio.h>
int main()
{
	int a,b,*p=&a,*q=&b,t;
	printf("ENTER FIRST NO:");
	scanf("%d",&a);
	printf("ENTER SECOND NO:");
	scanf("%d",&b);
	printf("\nBEFORE INTERCHANGING:\nA=%d\nB=%d",a,b);
	t=*p;
	*p=*q;
	*q=t;	
	printf("\nAFTER INTERCHANGING:\nA=%d\nB=%d",a,b);
}
