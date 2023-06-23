#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter value of a:";
	cin>>a;
	if(a%4==0)
	{
		cout<<a<<" is leap year";
	}
	else{
		cout<<a<<" is not leap year";
	}
	return 0;
}