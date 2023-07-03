#include<iostream>
using namespace std;
class multi
{
    int l,w,h;
    public:
    void setdata(int a,int b,int c)
    {
        l=a;
        w=b;
        h=c;
    }
    int getdata()
    {
        return l*w*h;
    }
    multi operator* (multi &n)
    {
        multi t;
        t.l = l * n.l;
        t.w = w * n.w;
        t.h = h * n.h;
        return t;
    }
};
int main()
{
    multi a,b,c;
    a.setdata(2,2,2);
    cout<<"mutiplication A is: "<<a.getdata()<<endl;
    b.setdata(3,3,3);
    cout<<"multiplication B is: "<<b.getdata()<<endl;
    c=a*b;
    cout<<"multiplication C is: "<<c.getdata()<<endl;
}