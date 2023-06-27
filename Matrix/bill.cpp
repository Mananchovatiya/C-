#include<iostream>
using namespace std;
int main()
{
	char a[50],b[50];
	int  qty,disc,gst,price,billamt,amt,total,product,discamt,tb=0,nr=0,lc=0;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the price:";
		cin>>a[i];
		cout<<"Enter the qty:";
		cin>>b[i];	
	}
	cout<<"price\tqty\tamt\tdisc\tdiscamt\tgst\tbillamt";
	for(i=0;i<5;i++)
	{
		amt=a[i]*b[i];
		disc=(amt*10)/100;
		discamt=amt-disc;
		gst=(discamt*18)/100;
		billamt=discamt+gst;
		 tb+=discamt;	
		 lc+=gst;
		 nr+=billamt;
	}
	cout<<a[i]<<"\t"<<b[i]<<"\t"<<amt<<"\t"<<disc<<"\t"<<discamt<<"\t"<<gst<<"\t"<<billamt<<"\t"<<tb<<"\t"<<lc<<"\t"<<nr;
}