#include<iostream>
using namespace std;
class A
{
    protected:
    int n;
    public:
    void set()
    {
        cout<<"Enter value of n: ";
        cin>>n;
    }
};
class B : public A
{
    protected:
    int i,x;  
};
class derived : public B
{     
    public:
    void fact()
    {
        x=1;
        for(i=1;i<=n;i++)
        {
            x=x*i;
        } 
        cout<<""<<x;
    }
};
int main()
{
    derived d;
    d.set();
    d.fact();
}