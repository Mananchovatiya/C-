#include<stdio.h>
int s()
{
	  char i,j;
    for(i=65;i<=85;i+=0)  // row
    {
	for(j=1;j<=5;j++,i+=1)    // col
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
