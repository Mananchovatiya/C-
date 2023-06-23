#include<iostream>
using namespace std;

int per()
{
	int n,r,s=0,i;
	cout<<"Enter your number: ";
	cin>>n;
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
		cout<<i<<" is a perfact number";
	}
	else{
		cout<<i<<" is not a perfact number";
	}
	return i;
}
int main()
{
	per();
}
