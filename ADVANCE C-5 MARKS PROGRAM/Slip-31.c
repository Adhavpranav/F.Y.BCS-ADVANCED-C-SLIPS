/*
Slip 31
1]Write a program using command line arguments for addition of two 
numbers.
*/
#include<stdio.h>
int main(int argc,char *argv[])
{
	int a,b,c=0;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	c=a+b;
	printf("ADDITION OF %d & %d IS %d:",a,b,c);
}
