/*
Slip 14
2]Write a C program to accept three integers as command line 
arguments and find the maximum of the three.
*/
#include<stdio.h>
#include<conio.h>
int main(int argc,char *argv[])
{
	int a,b,c;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	c=atoi(argv[3]);
	if(a>b&&a>c)
	printf("%d IS MAXIMIUM NO AMONG THEM",a);
	else if(b>a&&b>c)
	printf("%d IS MAXIMIUM NO AMONG THEM",b);
	else
	printf("%d IS MAXIMIUM NO AMONG THEM",c);
}
