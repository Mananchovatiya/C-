#include<stdio.h>

int s()
{
	int i,n,t=0;
	printf("Enter value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n%d ",++i);
		t = t + i;
	}
	printf("\nTotal is:%d",t);
}
int main()
{
	s();
}
