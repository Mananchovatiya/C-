#include<iostream>
#define n 5
int min(int a[])
{	int c= a[0];
	for(int i=0;i<n;i++)
	{
		if(c>a[i])
		c=a[i];
	}std::cout<<"min:"<<c;
}
int max(int a[])
{	
	int b=a[0];
	for(int i=0;i<n;++i)
	{
		if(b<a[i])
		b=a[i];
	}std::cout<<"\nmax:"<<b;
	
}
int main()
{	
	int a[n],i;
	for(i=0;i<n;i++)
	{
		std::cout<<"enter number: ";
		std::cin>>a[i];
	}
	min(a);
	max(a);
}