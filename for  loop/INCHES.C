#include<stdio.h>
#include<conio.h>
void main()
{
	int inches,centimeter;
	clrscr();
	printf("Enter the value of inches:");
	scanf("%d",&inches);
	centimeter = inches*2.54;
	printf("%d  inches:%d centimeter",inches,centimeter);
	getch();
}