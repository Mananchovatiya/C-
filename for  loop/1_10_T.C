#include<stdio.h>
int ser()
{
	int i,n=0;
	for(i=1;i<=10;i++)
	{
		printf("\n%d",i);
		n=n+i;
	}
	printf("\nTotal is:%d",n);
}
int main()
{
	ser();
}
