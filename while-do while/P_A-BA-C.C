#include<stdio.h>
int main()
{
  char i,j;
   i=65;
 do
  {	j=i;
	while(j>=65)
	{
		printf("%c ",j);
		j--;
	}
	printf("\n");
	i++;
  }while(i<=69);
 
}
