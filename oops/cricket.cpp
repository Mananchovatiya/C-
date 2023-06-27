#include<iostream>
using namespace std;
class batsman
{
    int bcode;
    float batavg;
    int innings,runs,notout;
    char bname[20];
    float calcavg()
    {
          return runs/(innings-notout);
    }
    public:
    void readdata()
    {
        cout<<"Enter bcode: ";
        cin>>bcode;
        cout<<"Enter batsman name: ";
        cin>>bname;
        cout<<"Enter innings: ";
        cin>>innings;
        cout<<"Enter runs: ";
        cin>>runs;
        cout<<"Enter notout: ";
        cin>>notout;
        batavg = calcavg();
    }
    void displaydata()
    {
        cout<<"bcode: "<<bcode<<endl;
        cout<<"batsman name: "<<bname<<endl;
        cout<<"innings: "<<innings<<endl;
        cout<<"runs: "<<runs<<endl;
        cout<<"notout: "<<notout<<endl;
        cout<<"batavg: "<<batavg<<endl;
    }
};
int main()
{
    batsman x;
    x.readdata();
    x.displaydata();
}