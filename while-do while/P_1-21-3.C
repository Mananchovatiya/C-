#include<stdio.h>
int main()
{
  int i,j;
   i=1;
  do
  {	j=i;
	while(j>=1)
	{
		printf("%d ",j);
		j--;
	}
	printf("\n");
	i++;
  }while(i<=5);
 }
