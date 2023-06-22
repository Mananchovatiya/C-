#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s=20;
	clrscr();
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=s;j++)
			printf(" ");
		for(j=4;j>=i;j--){
			printf(" %d",j);
		}
		printf("\n");
	}
	for(i=1;i<=5-1;i++)
	{
		for(j=1;j<=s;j++)
			printf(" ");
		for(j=3;j>=i;j--){
			printf(" %d",j+1);
		}
		printf("\n");
	}
	getch();
}
