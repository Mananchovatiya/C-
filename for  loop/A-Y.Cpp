#include<iostream>
using namespace std;

int s()
{
	  char i,j;
    for(i=65;i<=85;i+=0)  // row
    {
	for(j=1;j<=5;j++,i+=1)    // col
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
