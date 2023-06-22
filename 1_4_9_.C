#include<stdio.h>
int ser()
{
	int i,n,t;
	printf("Enter value ofi:");
	scanf("%d",&i);
	for(n=1;n<=i;n++)
	{
		printf("%d, ",(n*n));
	}
}
int main()
{
	ser();	
}
