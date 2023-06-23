#include<iostream>
using namespace std;
int main()
{
	int a,n;
	cout<<"Enter value of n:";
	cin>>n;
	for(a=1;a<=n;a++)
	{
		cout<<a++<<",  ";
	}
	return 0;
}