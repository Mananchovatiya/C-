#include<stdio.h>
int main()
{
	int i,j,s=20;
	 i=1;
	do
	{	j=1;
		while(j<=s){
			printf(" ");
			j++;}
		j=1;
		while(j<=i){
			printf("%c",j+64);
			j++;
		}
		s--;
		printf("\n");
		i++;
	}while(i<=4);
	i=4-1;
	do
	{	j=1;
		while(j<=s+2){
			printf(" ");
			j++;}
		j=1;
		while(j<=i){
			printf("%c",j+64);
			j++;
		}
		s++;
		printf("\n");
		i--;
	}while(i>=1);
	 
}
