#include<stdio.h>
#include<conio.h>
void main()
{
	int t,a,b,c;
	clrscr();
	printf("Enter value  of  a:");
	scanf("%d",&a);
	printf("Enter value  of  b:");
	scanf("%d",&b);
	printf("Enter value  of  c:");
	scanf("%d",&c);
	t = (a>b)?(a>c?a:c):(b>c?b:c);
	printf("%d is largest number.",t);
	getch();
}
