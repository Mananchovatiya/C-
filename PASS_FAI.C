#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter value of a:");
	scanf("%d",&a);
	if(a>33)
	{
		printf("student is passed");
	}
	else{
		printf("student is failed");
	}
	getch();

}