#include<stdio.h>
int main()
{
	int a[10],i,l=0,t=0;
	for(i=0;i<5;i++)
	{
		printf("Enter any number:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
		{
			t+=a[i];
 		}
	printf("even position total  is: %d",t);
	for(i=0;i<5;i++)
	{
		if(a[i]%2!=0)
		{
			l+=a[i];
		}
	}
	printf("\nodd position total is: %d",l);
}