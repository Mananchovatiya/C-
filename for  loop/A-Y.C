#include<stdio.h>
#include<conio.h>
void main()   // nested for loop
{
   char i,j;
    clrscr();
    for(i=65;i<=85;i+=0)  // row
    {
	for(j=1;j<=5;j++,i+=1)    // col
	{
		printf("%c ",i);
	}
	printf("\n");
    }
    getch();
}
