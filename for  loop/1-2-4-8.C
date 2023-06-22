#include<stdio.h>
int s()
{
	 int i,n;
  printf("Enter value  of n:");
  scanf("%d",&n);
  for(i=1;i<=n;i*=2)
  {
	printf("%d,",i);
  }	
}
int main()
{
 
 s();
}
