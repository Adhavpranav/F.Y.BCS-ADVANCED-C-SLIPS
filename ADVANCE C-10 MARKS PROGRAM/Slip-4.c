/*
Slip 4
2]Write a program to perform the following operations on two 
strings using standard library functions:
a. Copy b. Compare
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20],ch;
	int k;
	printf("ENTER FIRST STRING:");
	gets(s1);
	printf("ENTER SECOND STRING:");
	gets(s2);
	printf("\na.COPY\tb.COMPARE");
	printf("\nENTER YOUR CHOICE:");
	scanf(" %c",&ch);
	switch(ch)
	{
		case 'a':strcpy(s1,s2);
		printf("COPY SUCC:");
		puts(s1);
		break;
		case 'b':k=strcmp(s1,s2);
		if(k==0)
		printf("\nBOTH STRING ARE SAME.");
		else if(k>0)
		printf("\nFIRST STRING IS GREATER.");
		else
		printf("\nSECOND STRING IS GREATER.");
		break;
		default:printf("\nENTER A VALID CHOICE.");
		break;
	}
}
