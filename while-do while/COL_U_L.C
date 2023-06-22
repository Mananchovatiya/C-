#include<stdio.h>
int main()
{
  char c=65;
  int k,m;
 m=1;
  do
  {	k=1;
	while(k<=m)
	{
	if(k%2==0)
	{
		printf("%c ",c+++32);
	}
	else{
		printf("%c ",c++);
	       }k++;
	}

	printf("\n");
	m++;
  }while(m<=5) ;
 
}
