/*
Slip 15

3]Write a program to perform the following operations on strings using user 
defined functions:
a. Length of string
b. Copy one string to another
c. Convert string to uppercase
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	printf("ENTER A STRING:");
	gets(s1);
	int i;
	for(i=0;s1[i]!='\0';i++);
	printf("\nLENGTH OF STRING:%d",i);
	for(i=0;s1[i]!='\0';i++)
		{
			s2[i]=s1[i];
		}
		s2[i] = '\0';
		printf("\nCOPIED STRING:");
		puts(s2);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='a'&&s1[i]<='z')
		s1[i]=s1[i]-32;
	}
	printf("\nUPPERCASE STRING:");
	puts(s1);
}
