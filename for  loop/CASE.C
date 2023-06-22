#include<stdio.h>
#include<conio.h>
void main()
{
	char ch,upr,lwr;
	clrscr();
	printf("Enter your ch:");
	scanf("%c",&ch);
	lwr = ch + 32;
	upr = ch - 32;
	if(ch>=65&&ch<90)
	{
		      printf("Your lower case char is:%c",lwr);
	}
	else{
		      printf("Youe upper case char is:%c",upr);
	}
	getch();
}