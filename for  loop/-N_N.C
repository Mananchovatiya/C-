#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n;
	clrscr();
	printf("Enter value of n:");
	scanf("%d",&n);
	for(a=-n;a<=n;a++)
	{
		printf("%d,  ",a);
	}
	getch();
}