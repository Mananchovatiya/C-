#include<iostream>
using namespace std;
class book
{
    int bno;
    char btytle[20];
    float price;
    float total_cost(int x)
    {
        float total;
        total=price*x;
        return total;
    }
public:
    void input()
    {
        cout<<"\nEnter book no: ";
        cin>>bno;
        cout<<"\nbook tytle: ";
        cin>>btytle;
        cout<<"\nprice of the book: ";
        cin>>price;
    }
    void purchase()
    {
        int n;
        cout<<"Enter the number of copies to be purchased: ";
        cin>>n;
        float total;
        total=total_cost(n);
        cout<<"Total cost to be paid by the user: "<<total;
    }
};
int main()
{
    book b;
    b.input();
    b.purchase();

}