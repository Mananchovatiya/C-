#include<iostream>
using namespace std;

int s()
{
    int i,j;
    
    for(i=11;i<=51;i+=5)  // row
    {
        for(j=11;j<=51;j+=10,i+=1)    // col
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
