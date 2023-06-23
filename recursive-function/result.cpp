#include<iostream>
using namespace std;

int dis(int maths,int sci,int eng,int total,float per)
{
	cout<<"maths\tsci\teng\ttotal\tper\n";
	cout<<maths<<"\t"<<sci<<"\t"<<eng<<"\t"<<total<<"\t"<<per<<endl;
}
int calc(int maths,int sci,int eng)
{
	int total;
	float per;
	total=maths+sci+eng;
	per=(float)total/3;
	dis(maths,sci,eng,total,per);
}
int setdata()
{
	int maths,sci,eng;
	cout<<"Enter maths marks: ";
	cin>>maths;
	cout<<"Enter sci marks: ";
	cin>>sci;
	cout<<"Enter eng marks: ";
	cin>>eng;
	calc(maths,sci,eng);
}
int main()
{
	setdata();
}