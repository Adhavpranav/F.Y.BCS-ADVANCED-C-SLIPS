/*
Slip 11
2]Write a menu driven program to perform the following 
operations on strings using standard library functions:
i) Compare ii) Copy
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int k,ch;
	printf("ENTER FIRST STRING:");
	gets(s1);
	printf("ENTER SECOND STRING:");
	gets(s2);
	do{
	printf("\n1.COMPARE\t2.COPY");
	printf("\nENTER YOUR CHOICE:");
	scanf(" %d",&ch);
		switch(ch)
		{
		case 2:strcpy(s1,s2);
		printf("COPY SUCC:");
		puts(s1);
		break;
		case 1:k=strcmp(s1,s2);
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
	}while(ch==1||ch==2);
}
