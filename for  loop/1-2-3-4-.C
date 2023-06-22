#include<stdio.h>
int s()
{
	int i,j;
    for(i=1;i<=5;i++)  // row
    {
	for(j=1;j<=5;j++)    // col
	{
		printf("%d ",i);
	}
	printf("\n");
    }	
}
int main()   // nested for loop
{
    s();
}

