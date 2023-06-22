#include<stdio.h>
#include<conio.h>
void main()   // nested for loop
{
    int i,j;
    clrscr();
    for(i=11;i<=51;i+=5)  // row
    {
	for(j=11;j<=51;j+=10,i+=1)    // col
	{
		printf("%d ",i);
	}
	printf("\n");
    }
    getch();
}
