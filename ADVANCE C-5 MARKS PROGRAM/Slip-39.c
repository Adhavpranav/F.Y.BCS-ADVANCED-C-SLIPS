/*
Slip 39
1]Write a C program to compare two strings using standard library 
function
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int k;
	printf("ENTER FIRST STRING:");
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

