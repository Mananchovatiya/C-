#include<stdio.h>
int s()
{
int a;
	printf("Enter value of a:");
	scanf("%d",&a);
	if(a%5==0&&a%3==0)
	{
		printf("%d is divisible by 5 and 3",a);
	}
	else{
		printf("%d is not divisible by 5  and 3",a);
	}	
}
int main()
{
s()	
}