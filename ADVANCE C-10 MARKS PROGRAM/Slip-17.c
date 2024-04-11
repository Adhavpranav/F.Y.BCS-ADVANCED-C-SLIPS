/*
Slip 17
2]. Write a program to perform the following operations on strings using 
standard library functions:
a. Copy one string to another
b. Convert a string to uppercase.
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20],ch;
	printf("ENTER A STRING:");
	gets(s1);
	printf("\na. Copy one string to another\nb. Convert a string to uppercase.");
	printf("\nENTER YOUR CHOICE:");
	scanf("%c",&ch);
	switch(ch)
	{
	case 'a':
	strcpy(s2,s1);
	printf("\nCOPIED STRING:");
	puts(s2);
	break;
	case 'b':
	strupr(s1);
	printf("\nUPPERCASE STRING:");
	puts(s1);
	break;
	default:printf("\nINVALID CHOICE");
	}
}
