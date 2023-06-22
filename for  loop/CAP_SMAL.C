#include<stdio.h>
#include<conio.h>
void main()
{
    char i;
    clrscr();
    for(i=0;i<=24;i+=2)
    {
	if(i%4==0)
	{
		printf("%c ",i+65);
	}
	else{
		printf("%c ",i+97);
	}
    }
    getch();
}
