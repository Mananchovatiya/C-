#include<stdio.h>
int s()
{
	char a;
	int n=65;
	
	for(a=65;a<=90;a++)
	{
		printf("%c-%d, ",a,n++);
	}
}
int main()
{
	s();
	
}