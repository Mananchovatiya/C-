#include<stdio.h>
int s()
{
	int i,j,s=20;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=s;j++)
			printf(" ");
		for(j=i;j>=1;j--){
			printf(" %c",j+64);
		}
		printf("\n");
	}
	for(i=4-1;i>=0;i--)
	{
		for(j=1;j<=s;j++)
			printf(" ");
		for(j=i;j>=1;j--){
			printf(" %c",j+64);
		}
		printf("\n");
	}
}
int main()
{
	s();
}
