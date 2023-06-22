#include<stdio.h>
int s(int n)
{
	if(n==0)
	{
		return 1;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return s(n-1)+s(n-2);
	}
}
int main()
{	
	int n=20;
	for(int i=0;i<n;i++)
	{
	printf("%d,",s(i));
	}
}