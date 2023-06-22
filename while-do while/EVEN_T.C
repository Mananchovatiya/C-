#include<stdio.h>
int main()
{
	int i,n,t=0;
	i=1; 
	printf("Enter value of n:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("\n%d ",++i);
		t = t + i;
		i++;
	}
	printf("\nTotal is:%d",t);
		
}
