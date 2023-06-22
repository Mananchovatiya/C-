#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n=0;
	clrscr();
	for(i=1;i<=10;i++)
	{
		printf("\n%d",i);
		n=n+i;
	}
	printf("\nTotal is:%d",n);
	getch();
}
