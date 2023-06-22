#include<stdio.h>
int main()
{
	int n,i=1,a;
	printf("Enter number: ");
	scanf("%d",&n);
	table:
		if(i<=10)
		{	
			a=n*i;
			printf("%d * %d = %d\n",n,i++,a);
			goto table;
		}
}