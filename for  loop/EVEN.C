#include<stdio.h>
int s()
{
	
	int a,n;

	printf("Enter value of n:");
	scanf("%d",&n);
	for(a=2;a<=n;a++)
	{
		printf("%d,  ",a++);
	}
	
}
int main()
{s();
}