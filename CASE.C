#include<stdio.h>
int s()
{
	char ch,upr,lwr;
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
}
int main()
{s();
	
}