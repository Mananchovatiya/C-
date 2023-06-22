#include<stdio.h>
int s()
{
	 int i,j;

    for(i=1;i<=5;i+=5)  // row
    {
	for(j=1;j<=25;j++)    // col
	{
		printf("%d ",j);
	}
	printf("\n");
    }
}
int main()   // nested for loop
{
   s();
 
}

