#include<stdio.h>
int main()
{
	int i,j,s=20;
                   i=4;
	do
	{	
		j=1;
		while(j<=s)
		{
			printf(" ");
			j++;	
		}
		j=4;
		while(j>=i)
		{
			printf(" %d",j);
			j--;	 
		}
	            i++;
                               printf("\n");
	}while(i>=1);
	i=1;
	do
	{	
		j=1;
		while(j<=s)
		{
			printf(" ");
			j++;
		}
		j=3;
		while(j>=i)
		{
			printf(" %d",j+1);
			j--;
		}
		printf("\n");
		i++;
	}while(i<=5-1);
	 
}
