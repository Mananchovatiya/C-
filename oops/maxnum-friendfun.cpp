#include<iostream>
using namespace std;
class Test 
{
    int x, y;
    friend void max(Test t);
    public:
    void setdata() 
    {
       cout<<"Enter two numbers:";
       cin>>x>>y;
    }
};
void max(Test t) 
{
   if(t.x > t.y) 
   {
       cout<<"Largest number is:"<<t.x;
   } 
   else 
   {
       cout<<"Largest number is:"<<t.y;
   }
}
int main() 
{
   Test t;
   t.setdata();
   max(t);
}