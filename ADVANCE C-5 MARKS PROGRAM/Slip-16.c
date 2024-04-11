/*
Slip 16
1]Write a program to find the length of a string using standard library 
function.
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20];
	printf("ENTER A STRING:");
	gets(s1);
	printf("\nLENGTH OF STRING:%d",strlen(s1));
}
