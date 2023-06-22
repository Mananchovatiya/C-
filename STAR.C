#include<stdio.h>
#include<conio.h>
void main()   // nested for loop
{
    char i,j;
    clrscr();
    for(i=1;i<=5;i++)  // row
    {
	for(j=1;j<=3;j++)    // col
	{
		printf("* ");
	}
	printf("\n");
    }
    getch();
}


