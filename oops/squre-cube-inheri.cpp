#include<iostream>
using namespace std;
class base
{
    protected:
    int n;
    public:
    base()
    {
        cout<<"\nEnter value of n: ";
        cin>>n;
    }
};
class squre : public base
{
    public:
    void getz()
    {
    cout<<"squre: "<<n*n;
    }
};
class cube : public base
{
    public:
    void getc()
    {
    cout<<"cube: "<<n*n*n;
    }
};
int main()
{
    squre s;
    s.getz();

    cube c;
    c.getc();
}