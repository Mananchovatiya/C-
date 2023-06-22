#include<stdio.h>

int main()   // nested for loop
{
    int i,j;
    
    for(i=1;i<=25;i+=0)  // row
    {
	for(j=1;j<=5;j++,i+=1)    // col
	{
		printf("%d ",i);
	}
	printf("\n");
    }
    
}
