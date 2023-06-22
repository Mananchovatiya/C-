#include<stdio.h>
#include<conio.h>
void main()   // nested for loop
{
    int i,j;
    clrscr();
    for(i=1;i<=5;i++)  // row
    {
	for(j=1;j<=5;j++)    // col
	{
		printf("%d ",j);
	}
	printf("\n");
    }
    getch();
}
