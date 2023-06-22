#include<stdio.h>
int main()
{
  char i,j,a=65;
  i=1; 
 do
  {j=1;
	while(j<=i)
	{
		printf("%c ",a);
		a++;
		j++;
	}
	printf("\n");
	i++;
  }while(i<=5);
   
}
