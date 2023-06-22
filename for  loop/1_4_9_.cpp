#include<iostream>
using namespace std;
int ser()
{
	int i,n,t;
	cout<<"Enter value of i:";
	cin>>i;
	for(n=1;n<=i;n++)
	{
		cout<<""<<(n*n)<<", ";
	}
}
int main()
{
	ser();	
}
