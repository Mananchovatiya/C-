#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,t;
	clrscr();
	printf("Enter value ofi:");
	scanf("%d",&i);
	for(n=1;n<=i;n++)
	{
		printf("%d, ",(n*n));
	}
	getch();
}
