#include<iostream>
using namespace std;
int s()
{
char c=65;
  int k,m;
  for(m=1;m<=5;m++)
  {
	for(k=1;k<=m;k++)
	{
	if(k%2==0)
	{
		cout<<char(c+++32)<<" ";
	}
	else{
		cout<<char(c++)<<" ";
	}
	}

	cout<<endl;
  }	
}
int main()
{
  s();
}