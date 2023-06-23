#include<iostream>
using namespace std;
int s()
{
	int i,j,s=20;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=s;j++)
			cout<<" ";
		for(j=i;j>=1;j--){
			cout<<" "<<char(j+64);
		}
		cout<<endl;
	}
	for(i=4-1;i>=0;i--)
	{
		for(j=1;j<=s;j++)
			cout<<" ";
		for(j=i;j>=1;j--){
			cout<<" "<<char(j+64);
		}
		cout<<endl;
	}
}
int main()
{
	s();
}