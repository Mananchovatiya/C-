#include<stdio.h>
#include<conio.h>
void main()
{
  char c=65;
  int k,m;
  clrscr();
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
  getch();
}
