/*
Slip 40
3]Write a program to copy contents of file a.txt to b.txt by changing the 
case of each alphabet
*/
#include<stdio.h>
#include<ctype.h>
int main()
{
	FILE *f1,*f2;
	char ch;
	f1=fopen("a.txt","r");
	f2=fopen("b.txt","w");
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
		else
		fputc(ch,f2);
	}
	printf("\nALL DONE.");
	fclose(f1);
	fclose(f2);
}
