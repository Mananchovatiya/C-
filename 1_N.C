#include<stdio.h>
int ser()
{
	int a,n;
	printf("Enter value of n:");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		printf("%d,  ",a);
	}	
}
int main()
{
	ser();
}