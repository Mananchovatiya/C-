#include<stdio.h>
int main()
{
  int i,j,a=1;
   i=1;
  do
  {	j=1;
	while(j<=i)
	{
		printf("%d ",a);
		a++;
		j++;
	}
	printf("\n");
	i++;
  }while(i<=5);
 
}
