#include<iostream>
using namespace std;
int s()
{
	char ch,upr,lwr;
	cout<<"Enter your ch:";
	cin>>ch;
	lwr = ch + 32;
	upr = ch - 32;
	if(ch>=65&&ch<90)
	{
		      cout<<"Your lower case char is:"<<lwr;
	}
	else{
		      cout<<"Youe upper case char is:"<<upr;
	}
}
int main()
{s();
	
}
