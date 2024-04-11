/*
Slip 19
1]Define a macro EQUALNUM to compare two numbers x and y 
which gives 1 if they are equal and 0 otherwise. Use this in main.
*/
#include<stdio.h>
#define EQUALNUM(x,y) x==y?1:0
int main()
{
	int x,y,a=0;
	printf("ENTER TWO NO:");
	scanf("%d%d",&x,&y);
	a=EQUALNUM(x,y);
	if(a==1)
	printf("\nBOTH NO ARE EQUAL");
	else if(a==0)
	printf("\nNUMBERS ARE NOT EQUAL");
}

