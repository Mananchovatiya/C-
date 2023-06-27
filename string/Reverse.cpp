#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[50],str2[50];
	int i=0,j=0,rev;
	cout<<"Enter your string:";
	cin>>str1;
	while(str1[i]!='\0'){
	i++;
	rev=i-1;}
	while(j<i){
		str2[j]=str1[rev];
		rev--;
		j++;
	}
	str2[j]='\0';
	cout<<"reverse string is: "<<str2;
	return 0;
}
