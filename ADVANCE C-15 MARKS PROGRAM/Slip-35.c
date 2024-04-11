/*
Slip 35
3]Write a program to add two matrices and display the result. Use dynamic 
memory allocation
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **a,**b,**c1,r,c,i,j;
	printf("ENTER NO OF ROWS:");
	scanf("%d",&r);
	printf("ENTER NO OF COLS:");
	scanf("%d",&c);
	a=(int**)malloc(r*sizeof(int));
	b=(int**)malloc(r*sizeof(int));
	c1=(int**)malloc(r*sizeof(int));
	for(i=0;i<r;i++)
	{
		a[i]=(int*)malloc(c*sizeof(int));
		b[i]=(int*)malloc(c*sizeof(int));
		c1[i]=(int*)malloc(c*sizeof(int));
	}
	printf("ENTER FIRST MATRIX:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("ENTER SECOND MATRIX:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			c1[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("SUM OF THE MATRIX:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",c1[i][j]);
		}printf("\n");
	}
}
