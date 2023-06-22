#include<stdio.h>
int s()
{
	int dollar,rupees;
	printf("Enter the amount of dollar:");
	scanf("%d",&dollar);
	rupees = dollar*90;
	printf("%d dollar:%d rupees",dollar,rupees);
}
int  main()
{s();
	
}