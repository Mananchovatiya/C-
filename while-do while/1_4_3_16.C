#include<stdio.h>
int main()
{
	int i,n=0,t=2;
	n=1;
	printf("Enter value ofi:");
	scanf("%d",&i);
	while(n<=i)
	{
		printf("%d,%d,",n++,t*t);
		t++,t++,n++;
	}

}