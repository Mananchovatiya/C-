#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s=20;
	clrscr();
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=s;j++)
			printf(" ");
		for(j=1;j<=i;j++){
			printf("%c",j+64);
		}
		s--;
		printf("\n");
	}
	for(i=4-1;i>=1;i--)
	{
		for(j=1;j<=s+2;j++)
			printf(" ");
		for(j=1;j<=i;j++){
			printf("%c",j+64);
		}
		s++;
		printf("\n");
	}
	getch();
}
