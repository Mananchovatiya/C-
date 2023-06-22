#include<stdio.h>
int s(){
	char a,n=97;
	
	for(a=65;a<=90;a++)
	{
		printf("%c-%c, ",a,n++);
	}
	
}
int main()
{
	s();
}