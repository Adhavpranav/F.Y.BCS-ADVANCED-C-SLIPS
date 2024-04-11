/*
Slip 31
3]Write a menu driven program to perform the following operations on 
strings using user defined functions:
i)Length ii)Copy
*/
#include<stdio.h>
int main()
{
	int n,i,k,ch;
	char s1[20],s2[20];
	printf("ENTER A STRING:");
	gets(s1);
	do{
	printf("\n1:LENGTH\n2:COPY");
	printf("\nENTER CHOICE:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			for(i=0;s1[i]!='\0';i++);
			printf("\nLENGTH OF STRING:%d",i);
			break;
		case 2:
			for(i=0;s1[i]!='\0';i++)
			s2[i]=s1[i];
			s2[i]='\0';
			printf("\nCOPIED STRING:%s",s2);
			break;
		default:printf("\nINVALID CHOICE");
	}
	  }while(ch==1||2);
}
