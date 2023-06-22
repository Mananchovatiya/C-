#include<stdio.h>
int main()
{
    int a[5][5],i,j,n=4;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          if(i==j)
	{
		printf("%d ",1);
	}
	else{
		printf("%d ",0);
	}
        }printf("\n"); 
    }
}