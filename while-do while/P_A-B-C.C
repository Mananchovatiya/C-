#include<stdio.h>
int main()
{
  char i,j;
   i=65;
  do
  {	j=65;
	while(j<=i)
	{
		printf("%c ",i);
		j++;
	}
	printf("\n");
	i++;
  }while(i<=69);
   
}
