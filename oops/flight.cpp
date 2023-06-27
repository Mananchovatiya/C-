#include<iostream>
using namespace std;
class airport
{
    int flightnum;
    string destination;
    float distance,fuel;
    float calfuel()
    {
        if(distance<=1000)
        {
            fuel=500;
        }
        else if(distance>1000&&distance<=2000)
        {
            fuel =1100;
        }
        else
        {
            fuel=2200;
        }
    }
    public:
    void feedinfo()
    {
        cout<<"Enter flight number: ";
        cin>>flightnum;
        cout<<"Enter destination: ";
        cin>>destination;
        cout<<"Enter distance: ";
        cin>>distance;
        calfuel();
    }
    void showinfo()
    {
         cout<<"your flight number is: "<<flightnum<<endl;
        cout<<"your destination is: "<<destination<<endl;
        cout<<"your distance is: "<<distance<<endl;
        cout<<"necessary fuel is: "<<fuel<<endl;
    }
};
int main()
{
    airport x;
    x.feedinfo();
    x.showinfo();
}