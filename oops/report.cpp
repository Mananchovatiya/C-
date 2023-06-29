#include <iostream>
using namespace std;
class REPORT 
{
    int adno;
    char name[20];
    float marks[5];
    float average;
    void GETAVG()
    {
        average = 0.0;
        for (int i=0; i<5; ++i)
        { 
        average += marks[i];
        average /= 5;
        }
    }
public:    
    void READINFO()
    {
    cout << "Enter an admission number: ";
    cin>>adno;
    cout << "Enter a name: ";
    cin>>name;
    for (int i=0; i<5; i++) 
    {
        cout << "Enter the mark: ";
        cin >> marks[i];
    }
    GETAVG();
    }
    void DISPLAYINFO()
    {
    cout << "Admisson number: " << adno << endl;
    cout << "Name: " << name << endl;
    cout << "Marks obtained:" << endl;
    for (int i=0; i<5; ++i) 
    {
        cout << marks[i] << " ";
    }
    cout << endl;
    cout << "Average marks: " << average << endl;
    }
};
int main() 
{
    REPORT x;
    x.READINFO();
    x.DISPLAYINFO();
}