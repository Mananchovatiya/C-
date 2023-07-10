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
    int i; 
};
class derived : public B
{    
    public:
    void series()
    {
        for(i=1;i<=n;i++)
        {
            cout<<""<<i*i<<endl;
        }
    }
};
int main()
{
    derived d;
    d.set();
    d.series();
}