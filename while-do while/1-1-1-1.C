#include<stdio.h>
int main()   // nested for loop
{
    int i,j;
 i=1;
   while(i<=5)  // row
    {
	j=1;
	while(j<=5)    // col
	{
		printf("%d ",j);
		j++;
	}
	printf("\n");
	i++;
    }
   
}
