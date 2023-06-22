#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],i,j,t;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter val a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter val b[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }printf("\t");
        for(j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }printf("\t");
      for(j=0;j<3;j++)
      { 
              t=a[i][j]+b[i][j];
              printf("%d",t);
      }printf("\n");
    }
	
}