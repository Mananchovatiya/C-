#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,t=0;
	clrscr();
	printf("Enter value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n%d ",++i);
		t = t + i;
	}
	printf("\nTotal is:%d",t);
	getch();
}
