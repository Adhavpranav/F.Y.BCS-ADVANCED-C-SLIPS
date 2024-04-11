/*
Slip 31
2] Write a program to read contents of a text file and display it on screen 
*/
#include<stdio.h>
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
		printf("%c",ch);
	}
	fclose(f1);
}

