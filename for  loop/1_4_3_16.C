#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n=0,t=2;
	clrscr();
	printf("Enter value ofi:");
	scanf("%d",&i);
	for(n=1;n<=i;n++)
	{
		printf("%d,%d,",n++,t*t);
		t++,t++;
	}
	getch();
}