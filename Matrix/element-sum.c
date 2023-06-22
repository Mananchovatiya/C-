#include<stdio.h>
int main()
{
    int a[5][5],i,j,t1,t2,t3;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter value of a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }printf("\n");
    }
for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);		
        }printf("\n");
    }
	t1=a[0][0]+a[1][1]+a[2][2];
	t2=a[0][1]+a[0][2]+a[1][2];
	t3=a[1][0]+a[2][0]+a[2][1];
	printf("\ndiagonal element sum is: %d",t1);
	printf("\nupper triangle element sum is: %d",t2);
	printf("\nlower triangle element sum is: %d",t3);
}