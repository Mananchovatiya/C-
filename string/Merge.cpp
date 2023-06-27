#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str1,str2;
	int i=0,j=0;
	cout<<"Enter first string:";
	getline(cin,str1);
	cout<<"\nEnter second string:";
	getline(cin,str2);
	while(str1[i]!='\0')
	i++;
	while(str2[j]!='\0'){
	str1[i++]=str2[j];
	j++;
	}
	str1[i]='\0';
	cout<<"\nyour string is : "<<str1+str2;
}
