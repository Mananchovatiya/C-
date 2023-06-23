#include<iostream>
using namespace std;

int s()
{
	int i,j,s=20;
	 
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=s;j++)
			cout<<" ";
		for(j=1;j<=i;j++){
			cout<<char(j+64);
		}
		s--;
		cout<<endl;
	}
	for(i=4-1;i>=1;i--)
	{
		for(j=1;j<=s+2;j++)
			cout<<" ";
		for(j=1;j<=i;j++){
			cout<<char(j+64);
		}
		s++;
		cout<<endl;
	}
	 	
}
int main()
{
s();
}
