#include<stdio.h>
#include<conio.h>
void main()   // nested for loop
{
    int i,j;
    clrscr();
    for(i=2;i<=10;i+=2)  // row
    {
	for(j=1;j<=5;j++)    // col
	{
		printf("%d ",i);
	}
	printf("\n");
    }
    getch();
}
