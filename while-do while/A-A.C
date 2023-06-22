#include<stdio.h>
int main()
{
	char a,n=97;
	a=65;
	while(a<=90)
	{
		printf("%c-%c, ",a,n++);
		a++;
	}
	 
}