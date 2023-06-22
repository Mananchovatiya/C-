#include<stdio.h>
int s()
{
	 int i,j;
    
    for(i=2;i<=10;i+=2)  // row
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
