#include<stdio.h>
int main()
{
	int a,n;
	
	printf("Enter value of n:");
	scanf("%d",&n);
	a=-n;
	while(a<=n)
	{
		printf("%d,  ",a);
			a++;
	}
}