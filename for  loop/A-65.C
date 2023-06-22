#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	int n=65;
	clrscr();
	for(a=65;a<=90;a++)
	{
		printf("%c-%d, ",a,n++);
	}
	getch();
}