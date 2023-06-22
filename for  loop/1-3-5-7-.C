#include<stdio.h>
#include<conio.h>
void main()   // nested for loop
{
    int i,j;
    clrscr();
    for(i=1;i<=9;i+=2)  // row
    {
	for(j=1;j<=5;j++)    // col
	{
		printf("%d ",i);
	}
	printf("\n");
    }
    getch();
}
