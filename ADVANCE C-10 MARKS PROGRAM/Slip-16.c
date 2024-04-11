/*
Slip 16
2] Write a program to read a text file and display all the characters such 
that the case is reversed (upper to lower and lower to upper case).
*/
#include<stdio.h>
#include<ctype.h>
int main()
{
	FILE *f1;
	char ch;
	f1=fopen("yellow.txt","r");
	if(f1==NULL)
	{
		printf("\nFILE NOT FOUND");
		return 0;
	}
	while(!feof(f1))
	{
		ch=fgetc(f1);
		if(isupper(ch))
		printf("%c",tolower(ch));
		else if(islower(ch))
		printf("%c",toupper(ch));
		else
		printf("%c",ch);
	}
	fclose(f1);
}
