#include<iostream>
using namespace std;

char s()
{
 char ch,lwr,upr;
    cout<<"Enter your ch:";
    cin>>ch;
    lwr = (ch == 'a'|| ch == 'e'||ch == 'i'||ch== 'u'||ch== 'o');
  upr = (ch == 'A' || ch== 'E' || ch== 'I' || ch== 'U'|| ch== 'O');

return ch;	
}

int r()
{
    if(lwr || upr)
    {
    cout<<ch<<" is vowel";
    }
    else
    {
    cout<<ch<<" is consotant";
    }
}

int main()
{
   s();
	r();
}
