#include<iostream>
using namespace std;
int ser()
{
  float i;
  int n,t=1;
  cout<<"Enter value of n:";
  cin>>n;
  for(i=0.5;i<=n;i++)
  {

	cout<<""<<i++<<","<<t++<<",";
	t+=3;
  }	
}
int main()
{
 	ser();
}
