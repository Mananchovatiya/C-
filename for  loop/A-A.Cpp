#include<iostream>
using namespace std;

int s(){
	char a,n=97;
	
	for(a=65;a<=90;a++)
	{
		cout<<a<<"-"<<n++<<", ";
	}
	
}
int main()
{
	s();
}