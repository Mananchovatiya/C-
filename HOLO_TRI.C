#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sp=10;
	clrscr();
	for(i=1;i<=5;i++)
	{
	   for(j=1;j<=sp;j++)
	     printf(" ");
	     for(j=1;j<=i;j++)
	     if(i==1||i==5||j==1||j==i)
	     {
	     printf(" * ");
	     }
	     else
	     {
	     printf("   ");
	     }
	     sp--;
	     printf("\n");
	}
	getch();
}