#include<stdio.h>
int main()   // nested for loop
{
    int i,j;
   i=5;
   while(i>=1)  // row
    {	j=1;
	while(j<=5)    // col
	{
		printf("%d ",i);
		j++;
	}
	printf("\n");
	i--;
    }
  
}
