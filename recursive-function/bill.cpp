#include<iostream>
#include<string>
using namespace std;

struct bill
{
	int num,rate,qty,total;
	string name;
	float dis,gst,billamt,netbill;
};
int main()
{
	struct bill a[4];
	int i;
	for(i=0;i<2;i++)
	{
		cout<<"Enter num: ";
		cin>>a[i].num;
		cout<<"Enter name: ";
		cin>>a[i].name;
		cout<<"Enter rate: ";
		cin>>a[i].rate;
		cout<<"Enter qty: ";
		cin>>a[i].qty;
	}
	cout<<"\nnumber\tproduct\trate\tqty\ttotal\tdis\tbillamt\tgst\tnetbill";
	for(i=0;i<2;i++)
	{
		a[i].total=a[i].rate*a[i].qty;
		a[i].dis=a[i].total*5/100;
		a[i].billamt=a[i].total-a[i].dis;
		a[i].gst=a[i].billamt*18/100;
		a[i].netbill=a[i].billamt+a[i].gst;
	cout<<"\n"<<a[i].num<<"\t"<<a[i].name<<"\t"<<a[i].rate<<"\t"<<a[i].qty<<"\t"<<a[i].total<<"\t"<<a[i].dis<<"\t"<<a[i].billamt<<"\t"<<a[i].gst<<"\t"<<a[i].netbill;
	}
}
