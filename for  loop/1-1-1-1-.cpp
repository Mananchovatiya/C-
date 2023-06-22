#include<iostream>
using namespace std;
int ser()
{
    int i,j;
    for(i=1;i<=5;i++)  // row
    {
	for(j=1;j<=5;j++)    // col
	{
		cout<<" "<<j;
	}
	cout<<"\n";
    }
}
int main() 
{
   	ser();
}
