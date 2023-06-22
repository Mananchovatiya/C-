#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sp=30;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=sp;j++)
			printf(" ");

		for(j=1;j<=2*i-1;j++){
			if(i==5||j==1||j==(2*i-1))
			{
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		sp--;
		printf("\n");
	}

	getch();
}
