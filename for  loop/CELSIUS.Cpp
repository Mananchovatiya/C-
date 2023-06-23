#include<iostream>
using namespace std;

int s()
{
	float celsius,fahrenheit;
	cout<<"Enter the value of celsius:";
	cin>>celsius;
	fahrenheit  = celsius*(9.0/5.0)+32;
	cout<<celsius<<" celsius: "<<fahrenheit<<" fahrenheit";

}
int main()
{
	s();
}