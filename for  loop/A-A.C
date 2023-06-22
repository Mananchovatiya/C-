#include<stdio.h>
#include<conio.h>
void main()
{
	char a,n=97;
	clrscr();
	for(a=65;a<=90;a++)
	{
		printf("%c-%c, ",a,n++);
	}
	getch();
}