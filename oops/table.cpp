#include<iostream>
using namespace std;
class A
{
    protected:
    int n;
    public:
    void seta()
    {
        cout<<"Enter value of n: ";
        cin>>n;
    }
};
class B : public A
{
    protected:
    int i,j;   
};
class derived : public B
{
    public:
    void setb()
    {
       for(i=1;i<=10;i++)
	    {	
            j=n*i;
		    cout<<n<<" * "<<i<<" = "<<j<<endl;
	    }
    }
};
int main()
{
    derived x;
    x.seta();
    x.setb();
}