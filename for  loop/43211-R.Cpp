#include<iostream>
using namespace std;
int s()
{
	int i,j,s=20;
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=s;j++)
			cout<<" ";
		for(j=4;j>=i;j--){
			cout<<" "<<j;
		}
		cout<<endl;
	}
	for(i=1;i<=5-1;i++)
	{
		for(j=1;j<=s;j++)
			cout<<" ";
		for(j=3;j>=i;j--){
			cout<<" "<<j+1;
		}
		cout<<endl;
	}
}
int main()
{
s();	
}
