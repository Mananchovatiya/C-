#include<iostream>
using namespace std;

int s()
{
	char a;
	int n=65;
	
	for(a=65;a<=90;a++)
	{
		cout<<a<<"-"<<n++<<", ";
	}
}
int main()
{
	s();
	
}