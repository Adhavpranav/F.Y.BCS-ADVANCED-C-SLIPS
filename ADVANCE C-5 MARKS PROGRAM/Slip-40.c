/*
Slip 40
1]Write a program to calculate sum of two numbers. Pass the 
numbers as command line arguments
*/
#include<stdio.h>
int main(int argc,char *argv[])
{
	int a,b,c;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	c=a+b;
	printf("\nADDITION OF TWO NO:%d",c);
}
