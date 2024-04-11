/*
Slip 11

1]Write a C program to find the area of a circle by using PI as
macro.
*/
#include<stdio.h>
#define PI 3.14
int main()
{
	float a,r;
	printf("ENTER RADIUS OF CIRCLE:");
	scanf("%f",&r);
	a=PI*r*r;
	printf("\nAREA OF CIRCLE:%f",a);
}

