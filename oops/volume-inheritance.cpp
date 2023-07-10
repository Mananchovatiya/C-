#include<iostream>
using namespace std;
class A
{
    protected:
    int l,w,h;
    public:
    void seta()
    {
        cout<<"Enter l: ";
        cin>>l;
        cout<<"Enter w: ";
        cin>>w;
        cout<<"Enter h: ";
        cin>>h;
    }
};
class B : public A
{
    protected:
    int x;
    
};
class derived : public B
{
    public:
    void get()
    {
    x=l*w*h;
    cout<<"volume of cube is: "<<x;
    }
};
int main()
{
    derived z;
    z.seta();
    z.get();
}