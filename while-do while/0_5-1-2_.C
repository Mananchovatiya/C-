#include<stdio.h>

int main()
{
  float i;
  int n,t=1;
 i=0.5;
  printf("Enter value of n:");
  scanf("%d",&n);
 while(i<=n)
  {

	printf("%.1f,%d,",i++,t++);
	t+=3;i++;
  }

}
