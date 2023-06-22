#include<stdio.h>
int main()   // nested for loop
{
   char i,j;
 i=65;
    do  // row
    {	j=1;
	while(j<=5)    // col
	{
		printf("%c ",i);
		j++,i+=1;
	}
	printf("\n");
	i+=0;
    }while(i<=85);
 
}
