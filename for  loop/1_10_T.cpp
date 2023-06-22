#include<iostream>
using namespace std;
int ser()
{
	int i,n=0;
	for(i=1;i<=10;i++)
	{
		cout<<"\n"<<i;
		n=n+i;
	}
	cout<<"\nTotal is:"<< n;
}
int main()
{
	ser();
}
