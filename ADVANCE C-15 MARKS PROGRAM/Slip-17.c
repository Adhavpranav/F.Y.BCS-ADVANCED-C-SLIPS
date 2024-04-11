/*
Slip 17
3]A file “student.txt” contains rollno, name and total_marks. Write a 
program to read this file to display all student details on screen
*/
#include<stdio.h>
int main()
{
	FILE *f1;
	char ch,name[20];
	int rollno,total_marks;
	f1=fopen("student.txt","r");
	if(f1==NULL)
	{
		printf("\nFILE NOT FOUND");
		return 0;
	}
	printf("\nROLLNO\tNAME\tTOTALMARKS");
	
	
	while(fscanf(f1,"%d %s %d",&rollno,name,&total_marks)!=EOF){
		printf("\n%d\t%s\t%d",rollno,name,total_marks);
	}
	fclose(f1);
}
