#include<stdio.h>
#include<conio.h>
void main()   // nested for loop
{
    char i,j;
    clrscr();
    for(i=65;i<=69;i++)  // row
    {
	for(j=65;j<=69;j++)    // col
	{
		printf("%c ",i);
	}
	printf("\n");
    }
    getch();
}
