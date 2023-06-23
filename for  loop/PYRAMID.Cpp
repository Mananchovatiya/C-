#include<iostream>
using namespace std;
int main()
{
  int i,j,k,m=10;
  for(i=1;i<=m;i++)
  {
	for(j=1;j<=m-1;j++)
	{
		cout<<" ";

	}
	for(k=1;k<=2*i-1;k++)
	{
		cout<<"*";
	}
	m--;
	cout<<endl;
  }
}
