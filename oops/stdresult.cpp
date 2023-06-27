#include<iostream>
using namespace std;
class student
{
    int admno;
    float eng,maths,total,sci;
    char sname[20];
    float ctotal()
    {
          return maths+sci+eng;
    }
    public:
    void takedata()
    {
        cout<<"Enter admin no.: ";
        cin>>admno;
        cout<<"Enter student name: ";
        cin>>sname;
        cout<<"Enter maths marks: ";
        cin>>maths;
        cout<<"Enter eng marks: ";
        cin>>eng;
        cout<<"Enter sci marks: ";
        cin>>sci;
        total = ctotal();
    }
    void showdata()
    {
        cout<<"admin no: "<<admno<<endl;
        cout<<"student name: "<<sname<<endl;
        cout<<"maths: "<<maths<<endl;
        cout<<"english: "<<eng<<endl;
        cout<<"science: "<<sci<<endl;
        cout<<"total: "<<total<<endl;
    }
};
int main()
{
    student s;
    s.takedata();
    s.showdata();
}