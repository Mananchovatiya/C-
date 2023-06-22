#include<stdio.h>
#include<conio.h>
void  main()
{
	int dollar,rupees;
	clrscr();
	printf("Enter the amount of dollar:");
	scanf("%d",&dollar);
	rupees = dollar*80;
	printf("%d dollar:%d rupees",dollar,rupees);
	getch();
}