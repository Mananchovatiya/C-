#include<stdio.h>
int main()
{
  int i,j;
  i=5; 
  do
  {	j=i;
	while(j<=5)
	{
		printf("%d ",j);
		j++;
	}
	printf("\n");
	i--;
  }while(i>=1);
  }
