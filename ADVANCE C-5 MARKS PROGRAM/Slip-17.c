/*
Slip 17
1] Write a program to calculate area of a circle. Use macro for PI
*/
#include<stdio.h>
#define PI 3.14
int main()
{
	float a,r;
	printf("ENTER RADIUS:");
	scanf("%f",&r);
	a=PI*r*r;
	printf("\nAREA OF CIRCLE:%f",a);
}
