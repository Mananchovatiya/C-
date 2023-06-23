#include<iostream>
using namespace std;
int main()
{
	int t,a,b,c;
	cout<<"Enter value  of  a:";
	cin>>a;
	cout<<"Enter value  of  b:";
	cin>>b;
	cout<<"Enter value  of  c:";
	cin>>c;
	t = (a>b)?(a>c?a:c):(b>c?b:c);
	cout<<t<<" is largest number.";

}