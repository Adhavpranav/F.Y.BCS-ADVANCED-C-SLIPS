/*
Slip 40
2]Write a program to create student structure having fields roll no, 
name. Accept details of one student and write a function to 
display the details
*/
#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
}s1;
void disp(struct student s1);
int main()
{
	printf("ENTER ROLL NO:");
	scanf("%d",&s1.rollno);
	printf("ENTER NAME:");
	scanf("%s",&s1.name);
	disp(s1);
}
void disp(struct student s1)
{
	printf("\nROLL NO:%d",s1.rollno);
	printf("\nNAME:%s",s1.name);
}
