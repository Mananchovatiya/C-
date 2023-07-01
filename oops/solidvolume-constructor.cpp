#include<iostream>
using namespace std;
class shape
{
    public:
    shape(int a,int b,int c)
    {      
        cout<<"volume of rectangular is: "<<a*b*c<<endl;
    }
    shape(int a,double b,int c)
    {
        cout<<"volume of squre or rectangular pyramid is: "<<(4/3)*3.14*a*b*c<<endl;
    }
    shape(int a, int b,double c)
    {
        cout<<"volume of ellipsoid is: "<<(4/3)*3.14*a*b*c<<endl;
    }
    shape(int a)
    {
        cout<<"volume of cube is: "<<a*a*a<<endl;
    }
    shape(double a)
    {
        cout<<"volume of sphere is: "<<(4/3)*3.14*(a*a*a)<<endl;
    }
    shape(int a,int b)
    {
        cout<<"volume of cylinder is: "<<3.14*(a*a)*b<<endl;
    }
    shape(double a,double b)
    {
        cout<<"volume of pyramid is: "<<0.33*a*b<<endl;
    }
    shape(int a,double b)
    {
        cout<<"volume of right circular cone is: "<<0.33*3.14*(a*a)*b<<endl;
    }
    shape(double a,int b)
    {
        cout<<"volume of prism is: "<<a*b<<endl;
    }
};
int main()
{
    shape a(4,3,5),b(5,3.4,5),c(3,6,5.4),d(3),e(3.5),f(3,4),g(3.4,5.6),h(3,4.5),i(5.6,5);
}