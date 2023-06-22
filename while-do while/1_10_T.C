#include<stdio.h>
int  main()
{
	int i,n=0;
	i=1;
	while(i<=10)
	{
		printf("\n%d",i);
		n=n+i,i++;
	}
	printf("\nTotal is:%d",n);
	
}
