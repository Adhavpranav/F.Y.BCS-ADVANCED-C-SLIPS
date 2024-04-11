/*
Slip 15
2]Write a C program to count the number of characters and lines in a 
text file
*/
#include<stdio.h>
#include<ctype.h>
int main()
{
	FILE *f1;
	int c1=0,c2=1;
	f1=fopen("yellow.txt","r");
	char ch;
	if(f1==NULL)
	{
		printf("\nFILE NOT FOUND");
		return 0;
	}
	while(!feof(f1))
	{
		ch=fgetc(f1);
		if(!isspace(ch)&&ch!='\n')
		c1++;
		if(ch=='\n')
		c2++;
	}
	printf("\nCHARACTER COUNT:%d",c1);
	printf("\nLINES COUNT:%d",c2);
}
