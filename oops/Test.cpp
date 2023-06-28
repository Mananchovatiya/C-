#include<iostream>
using namespace std;
class TEST 
{
    int TestCode;
    string Description;
    int NoCandidates;
    int CALCNTR()   
    {
        return (NoCandidates/100+1);
    }
public :
     void SCHEDULE()
    {
        cout<<"Enter TestCode: ";
        cin>>TestCode;
        cout<<"Enter Description: ";
        cin>>Description;
        cout<<"Enter NoCandidate: ";
        cin>>NoCandidates;
        int number_of_centers = CALCNTR();
    }
    void DISPTEST()
    {
        cout<<"TestCode: "<<TestCode<<endl;
        cout<<"Description: "<<Description<<endl;
        cout<<"NoCandidates: "<<NoCandidates<<endl;
        cout<<"number_of_centers: "<<CALCNTR()<<endl;
    }

};
int main()
{
    TEST x;
    x.SCHEDULE();
    x.DISPTEST();
}

