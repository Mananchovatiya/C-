#include<stdio.h>
int s()
{
    char i,j;
    
    for(i=65;i<=69;i++)  // row
    {
	for(j=65;j<=69;j++)    // col
	{
		printf("%c ",i);
	}
	printf("\n");
    }	
}
int main()   // nested for loop
{

   s();
}
