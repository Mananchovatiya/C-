#include<stdio.h>
int s()
{
char c=65;
  int k,m;
  for(m=1;m<=5;m++)
  {
	for(k=1;k<=m;k++)
	{
	if(k%2==0)
	{
		printf("%c ",c+++32);
	}
	else{
		printf("%c ",c++);
	}
	}

	printf("\n");
  }	
}
int main()
{
  s();
}
