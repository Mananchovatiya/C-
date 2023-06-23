#include<iostream>
#define n 5
int total(int a[])
{	
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			std::cout << a[i];
		}
		else
		{
			std::cout << "\n" << a[i] << "\t" << a[i]+a[i-1];
		}
	}
}
int main()
{
	int a[n],i;
	for(i=0;i<n;i++)
	{
		std::cout << "Enter number: ";
		std::cin >> a[i];
	}
	total(a);
}
