#include<iostream>
using namespace std;
class squre
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
class derived : public squre
{     
    int i;  
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