#include<stdio.h>
int main()   // nested for loop
{
    int i,j;
 i=11;
    while(i<=51)  // row
    {	j=11;
	while(j<=51)    // col
	{
		printf("%d ",i);
		j+=10,i+=1;
	}
	printf("\n");
	i+=5;
    }
 
}
