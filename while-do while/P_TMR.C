#include<stdio.h>
int main()
{
	int i,j,sp=20;
	i=5; 
	do
	{j=1;
		while(j<=sp){
			printf("  ");
			j++;}
		j=1;
		while(j<=i){
			printf("* ");
			j++;
		}
		sp++;
		printf("\n");
			i--;
	}while(i>=1);
	 
}
