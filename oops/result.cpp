#include<iostream>
using namespace std;
class result
{
    int m,s,e,total;
    float per;
    public:
    void set()
    {      
            cout<<"\nEnter m: ";
            cin>>m;
            cout<<"\nEnter s: ";
            cin>>s;
            cout<<"\nEnter e: ";
            cin>>e;
    }
    void r()
    {
        total=m+s+e;
        per=total/3;
    }
    void a()
    {
        cout<<"m\ts\te\ttotal\tper\n";
        cout<<m<<"\t"<<s<<"\t"<<e<<"\t"<<total<<"\t"<<per<<"\t";
    }
};
int main()
{
    result x;
    x.set();
    x.r();
    x.a();
}