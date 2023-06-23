#include<iostream>
using namespace std;
int coin()
{
	int amt,a,b,c,d,e,f,g,h,i;
	cout<<"Enter value of amount: ";
	cin>>amt;
	while(amt>=2000){
		a=amt/2000;
		cout<<"2000 notes= "<<a;
	}
	while(amt>=500){
		b=amt/500;
		cout<<"500 notes= "<<b;
	}
	while(amt>=100){
		c=amt/100;
		cout<<"100 notes= "<<c;
	}
	while(amt>=50){
		d=amt/50;
		cout<<"50 notes= "<<d;
	}
	while(amt>=20){
		e=amt/20;
		cout<<"20 notes= "<<e;
	}
	while(amt>=10){
		f=amt/10;
		cout<<"10 notes= "<<f;
	}
	while(amt>=5){
		g=amt/5;
		cout<<"5 coins= "<<g;
	}
	while(amt>=2){
		h=amt/2;
		cout<<"2 coins= "<<h;
	}
	while(amt>=1){
		i=amt/1;
		cout<<"1 coins= "<<i;
	}
}
int main()
{
	coin();
}
