/*
Slip 19
3]Write a function which accepts a number and three flags as parameters if 
number is even set first flag to 1. If number is prime set second flag to 1
and if number is divisible by 3 or 7 set the third flag to 1(pass addresses of 
flags to the function.)
*/
#include<stdio.h>
void disp(int*,int*,int*,int);
int main()
{
	int f1=0,f2=0,f3=0,n;
	printf("\nENTER A NUMBER:");
	scanf("%d",&n);
	disp(&f1,&f2,&f3,n);
	if(f1==1)
	printf("\n%dIS A EVEN NUMBER",n);
	else
	printf("\n%dIS NOT EVEN NUMBER",n);
	if(f2==1)
	printf("\n%dIS A PRIME NUMBER",n);
	else
	printf("\n%dIS NOT PRIME NUMBR",n);
	if(f3==1)
	printf("\n%dIS DIVISIBLE BY 3 OR 7",n);
	else
	printf("\n%dIS NOT DIVISIBLE BY 3 OR 7",n);
}
void disp(int*f1,int*f2,int*f3,int n)
{
	int i,c=0;
	if(n%2==0)
	*f1=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			c=1;
			break;
		}
	}
	if(c==0)
	*f2=1;
	if(n%3==0||n%7==0)
	*f3=1;
}
