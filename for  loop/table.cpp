#include<iostream>
using namespace std;
int main()
{
	int n,i=1,a;
	cout<<"Enter number: ";
	cin>>n;
	while(i<=10)
	{	a=n*i;
		cout<<n<<" * "<<i++<<" = "<<a<<endl;
	}
}