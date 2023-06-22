#include<stdio.h>
int s()
{
	int i,j,s=15,n=21;
	int x=n/2+1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=s;j++)
			printf(" ");
		for(j=1;j<=n;j++)
		{
			if(j>=x && j<=n-x+1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		if(i<=n/2)
		x--;
		else
		x++;
		printf("\n");
	}
}
int main()
{
	s();
}

