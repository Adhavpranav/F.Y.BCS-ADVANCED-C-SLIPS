/*
Slip 26
1]Write a C program to compare one string to another using standard 
library function.
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int k;
	char s1[20],s2[20];
	printf("\nENTER FIRST STRING:");
	gets(s1);
	printf("\nENTER SECOND STRING:");
	gets(s2);
	k=strcmp(s1,s2);
	if(k==0)
	printf("\nBOTH STRING ARE SAME");
	else if(k>0)
	printf("\nFIRST STRING IS GREATER");
	else
	printf("\nSECOND STRING IS GREATER");
}
