#include<iostream>
using namespace std;

int main()
{
  char c=65;
  int k,m;
  for(m=1;m<=5;m++)
  {
	for(k=1;k<=m;k++)
	{
	if(m%2==0)
	{
		cout<<c+++32<<" ";
	}
	else{
		cout<<c++<<" ";
	}
	}

	cout<<endl;
  }
  return 0;
}
