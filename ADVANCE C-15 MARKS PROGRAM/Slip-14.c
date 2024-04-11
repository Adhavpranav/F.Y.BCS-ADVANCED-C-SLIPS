/*
Slip 14
3]Write a C program to copy the contents of one text file to another such 
that uppercase alphabets are converted to lowercase, lowercase to
uppercase and digits are converted to *.
*/
#include<stdio.h>
#include<ctype.h>
int main()
{
	FILE *f1,*f2;
	char ch;
	f1=fopen("yellow.txt","r");
	f2=fopen("black.txt","w");
	if(f1==NULL)
	{
		printf("\nFILE NOT FOUND");
		return 0;
	}
	while(!feof(f1))
	{
		ch=fgetc(f1);
		if(isupper(ch))
		fputc(tolower(ch),f2);
		else if(islower(ch))
		fputc(toupper(ch),f2);
		else if(isdigit(ch))
		fputc('*',f2);
		else
		fputc(ch,f2);
	}
	printf("\nALL DONE.");
	fclose(f1);
	fclose(f2);
}
