#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sp=20;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=sp;j++)
			printf("  ");
		for(j=1;j<=i;j++){
			printf("* ");
		}
		sp++;
		printf("\n");
	}
	getch();
}
