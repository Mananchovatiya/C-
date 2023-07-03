#include<iostream>
using namespace std;
class sub
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
    sub operator- (sub &n)
    {
        sub t;
        t.l = l - n.l;
        t.w = w - n.w;
        t.h = h - n.h;
        return t;
    }
};
int main()
{
    sub a,b,c;
    a.setdata(2,2,2);
    cout<<"substraction A is: "<<a.getdata()<<endl;
    b.setdata(3,3,3);
    cout<<"substraction B is: "<<b.getdata()<<endl;
    c=a-b;
    cout<<"substraction C is: "<<c.getdata()<<endl;
}