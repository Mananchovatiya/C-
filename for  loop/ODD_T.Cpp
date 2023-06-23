#include<iostream>
using namespace std;
int main()
{
	int i,n,t=0;
	cout<<"Enter value of n:";
	cin>>n;
	for(i=1;i<=n;i+=2)
	{
		cout<<"\n"<<i<<" ";
		t = t + i;
	}
	cout<<"\nTotal is:"<<t;
	return 0;
}