/*
Slip 18
3]Write a menu driven program using standard library function
• To find Length of string
• To compare two strings
• To copy one string to other.
• To concatenate two strings
*/
#include<stdio.h>
#include<string.h>

	int main()
	{
		char s1[20],s2[20];
		int ch,k;
		printf("\nENTER A FIRST STRING:");
		gets(s1);
		printf("\nENTER A SECOND STRING:");
		gets(s2);
		do{
		printf("\n1:To find Length of string\n2:To compare two strings\n3:To copy one string to other.\n4: To concatenate two strings");
		printf("\nENTER CHOICE:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("\nLENGTH OF FIRST STRING:%d",strlen(s1));
			printf("\nLENGTH OF SECOND STRING:%d",strlen(s2));
			break;
			case 2:k=strcmp(s1,s2);
			if(k==0)
			printf("\nBOTH STRINGS ARE EQUAL");
			else if(k>0)
			printf("\nFIRST STRING IS GREATER");
			else 
			printf("\nSECOND STRING IS GREATER");
			break;
			case 3:strcpy(s1,s2);
			printf("\nCOPIED STRING:");
			puts(s1);
			break;
			case 4:strcat(s1,s2);
				printf("\nCONCAT STRING:");
			puts(s1);
			break;
			default:printf("\nENTER A VALID CHOICE");
		}
		}while(ch>=1&&ch<=4);
}

