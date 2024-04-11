/*
Slip 3

1] Write a program to calculate length of string using standard library 
function.

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20];
	int k;
	printf("\nENTER A STRING:");
	gets(s1);
	k=strlen(s1);
	printf("\nLENGTH OF STRING:%d",k);
}
