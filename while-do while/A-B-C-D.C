#include<stdio.h>
int main()   // nested for loop
{
    char i,j;
    i=65; 
   do  // row
    {	j=65;
	while(j<=69)    // col
	{
		printf("%c ",i);
		j++;
	}
	printf("\n");
	i++;	
    }while(i<=69);
 
}
