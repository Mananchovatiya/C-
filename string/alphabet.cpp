#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a;
	int len=0;
	cout<<"Enter your string: ";
	getline(cin,a);
	len = a.length();
	int i=0;
	int j=len-1;
	while(i<len/2)
	{	
		cout<<a[i]<<a[j];
		i++;
		j--;	
	}
	if(len%2!=0){
	cout<<a[len/2];}
	cout<<"\n";
}
