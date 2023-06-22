#include<stdio.h>

int main()   // nested for loop
{
    int i,j;
    i=1;
    while(i<=25)  // row
    {                j=1;
	while(j<=5)    // col
	{
		printf("%d ",i);
		j++,i+=1;
	}
	printf("\n");
	i+=0;
    }
    
}
