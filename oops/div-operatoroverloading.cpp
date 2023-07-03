#include<iostream>
using namespace std;
class div
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
    div operator/ (div &n)
    {
        div t;
        t.l = l / n.l;
        t.w = w / n.w;
        t.h = h / n.h;
        return t;
    }
};
int main()
{
    div a,b,c;
    a.setdata(2,2,2);
    cout<<"division A is: "<<a.getdata()<<endl;
    b.setdata(3,3,3);
    cout<<"division B is: "<<b.getdata()<<endl;
    c=a/b;
    cout<<"division C is: "<<c.getdata()<<endl;
}