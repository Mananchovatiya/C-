#include<iostream>
using namespace std;
int ser()
{
	int i,n=0,t=2;
	cout<<"Enter value of i:";
	cin>>i;
	for(n=1;n<=i;n++)
	{
		cout<<""<<n++<<","<<t*t<<",";
		t++,t++;
	}
}
int main()
{
	ser();
}