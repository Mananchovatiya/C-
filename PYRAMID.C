#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k,m=45;
  clrscr();
  for(i=1;i<=m;i++)
  {
	for(j=1;j<=m-1;j++)
	{
		printf(" ");

	}
	for(k=1;k<=2*i-1;k++)
	{
		printf("*");
	}
	m--;
	printf("\n");
  }
  getch();
}
