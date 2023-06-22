#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter value of a:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is positive number",a);
	}
	else{
		printf("%d is negative number",a);
	}
	getch();

}