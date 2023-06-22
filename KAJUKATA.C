#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s=30 ,sp;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=s;j++)
			printf(" ");
		s--;
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
	sp=s+2;
	for(i=1;i<=5-1;i++)
	{
		for(j=1;j<=sp;j++)
			printf(" ");
		sp++;
		for(j=1;j<=2*(5-i)-1;j++){
			printf("*");
		}
		printf("\n");
	}
	getch();
}
