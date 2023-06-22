#include<stdio.h>
int main()
{
	int i,j,s=30;
 	i=1;
	do
	{	j=1;
	      while(j<=s){
		printf(" ");
		j++;}
		j=1;
		while(j<=5){
			if(i==1||i==5||j==1||j==5)
			{
				printf("* ");
			}
			else{
				printf("  ");
			}j++;
		}
		printf("\n");
		i++;
	}while(i<=5);

}
