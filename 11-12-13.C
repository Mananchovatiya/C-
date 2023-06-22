#include<stdio.h>
int s()
{
int i,j;
    
    for(i=11;i<=51;i+=5)  // row
    {
	for(j=11;j<=51;j+=10,i+=1)    // col
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
