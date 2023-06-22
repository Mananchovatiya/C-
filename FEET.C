#include<stdio.h>
#include<conio.h>
void main()
{
	int feet,inches;
	clrscr();
	printf("Enter the value of feet:");
	scanf("%d",&feet);
	inches = feet * 12;
	printf("%d feet:%d inches",feet,inches);
	getch();
}
