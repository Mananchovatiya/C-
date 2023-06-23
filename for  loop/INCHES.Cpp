#include<iostream>
using namespace std;
int main()
{
	float inches,centimeter;
	cout<<"Enter the value of inches:";
	cin>>inches;
	centimeter = (float)inches*2.54;
	cout<<inches<<" inches:"<<centimeter<<" centimeter";
}