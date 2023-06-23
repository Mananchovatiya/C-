#include<iostream>
using namespace std;

int s()
{
    char i,j;
    
    for(i=65;i<=69;i++)  // row
    {
	for(j=65;j<=69;j++)    // col
	{
		cout<<i<<" ";
	}
	cout<<endl;
    }	
}
int main()   // nested for loop
{

   s();
}
