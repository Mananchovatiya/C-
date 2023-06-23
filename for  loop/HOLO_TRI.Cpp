#include<iostream>
using namespace std;

int main()
{
	int i,j,sp=10;
	for(i=1;i<=5;i++)
	{
	   for(j=1;j<=sp;j++)
	     cout<<" ";
	     for(j=1;j<=i;j++)
	     if(i==1||i==5||j==1||j==i)
	     {
	     cout<<" * ";
	     }
	     else
	     {
	     cout<<"   ";
	     }
	     sp--;
	     cout<<endl;
	}
	return 0;
}
