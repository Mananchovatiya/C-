#include<stdio.h>
int main()
{
  int i,n;
  i=1;
  printf("Enter value  of n:");
  scanf("%d",&n);
  while(i<=n)
  {
	printf("%d,",i);
	i*=2;
  }
  
}
