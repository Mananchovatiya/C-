#include<iostream>
using namespace std;
class shape
{
    public:
    shape(int a)
    {      
        cout<<"area of squre is: "<<a*a<<endl;
    }
    shape(int a,double b)
    {
        cout<<"area of rectangle is: "<<a*b<<endl;
    }
    shape(double a)
    {
        cout<<"area of circle is: "<<3.14*a*a<<endl;
    }
    shape(int a,int b)
    {
        cout<<"area of triangle is: "<<(1/2)*a*b<<endl;
    }
    shape(double a,double b)
    {
        cout<<"area of ovel is: "<<3.14*a*b<<endl;
    }
};
int main()
{
    shape a(4),b(5,3.4),c(5.4),d(3,6),e(3.5,3.4);
}