#include<stdio.h>
int per()
{
	int n,r,s=0,i;
	printf("Enter your number: ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		r = n % i;
		if(r==0)
		{
			s+=i;
		}
	}
	if(s==n)
	{
		printf("%d is a perfact number",i);
	}
	else{
		printf("%d is not a perfact number",i);
	}
	return i;
}
int main()
{
	per();
}