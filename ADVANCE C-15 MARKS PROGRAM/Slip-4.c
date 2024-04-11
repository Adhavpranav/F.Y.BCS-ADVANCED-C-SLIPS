/*
Slip 4
3]Write a program to read the contents of a text file and count the number of 
characters, lines and words in the file.
*/
#include<stdio.h>
#include<ctype.h>
int main()
{
	FILE *f1;
	int c1=0,c2=1,c3=1;
	char ch;
	f1=fopen("green.txt","r");
	if(f1==NULL)
	{
		printf("\nFILE NOT FOUND..!");
		return 0;
	}
	while(!feof(f1))
	{
		ch=fgetc(f1);
		if(ch=='\n')
		c2++;
		if(isspace(ch))
		c3++;
		if (ch!=isspace(ch)&&ch!='\n'&&(isalpha(ch)||isdigit(ch)))
		c1++;
	}
	printf("\nCHARACTER COUNT:%d",c1);
	printf("\nLINE COUNT:%d",c2);
	printf("\nWORDS COUNT:%d",c3);
	fclose(f1);
}

