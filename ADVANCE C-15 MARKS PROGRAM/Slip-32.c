/*
Slip 32
3]Write a program to accept details of n students (roll number, name, and 
percentage) using structure. Perform the following operations 
using menu:
a. Display all students
b. Display all students having percentage >--------
*/
#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	float persentage;
}s1[100];
int main()
{
	int i,n;
	char ch;
	printf("\nENTER LIMIT:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nENTER ROLL NO:");
		scanf("%d",&s1[i].rollno);
		printf("ENTER NAME:");
		scanf("%s",&s1[i].name);
		printf("ENTER PERSENTAGE:");
		scanf("%f",&s1[i].persentage);
	}
	float p;
	do{
	printf("\na.DISPLAY ALL STUDENT\nb.DISPLAY ALL STUDENT HAVING PERCENTAGE >-------");
		printf("\nENTER CHOICE:");
		scanf(" %c",&ch);
		switch(ch)
		{
			case 'a':
				printf("\nALL STUD DITAILS:");
				for(i=0;i<n;i++)
				{
					printf("\nROLLNO:%d",s1[i].rollno);
					printf("\nNAME:%s",s1[i].name);
					printf("\nPERSENTAGE:%f",s1[i].persentage);
				}
				break;
			case 'b':
				printf("\nENTER PERSENTAGE :");
				scanf("%f",&p);
				for(i=0;i<n;i++)
				{
					if(s1[i].persentage>p)
					{
					printf("\nROLLNO:%d",s1[i].rollno);
					printf("\nNAME:%s",s1[i].name);
					printf("\nPERSENTAGE:%f",s1[i].persentage);
				}
			}break;
			default:printf("\nENTER A VALID CHOICE.");
		}
	}while(ch=='a'||ch=='b');
}
