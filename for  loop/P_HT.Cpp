#include<iostream>

using namespace std;

int main()
{
	int i,j,sp=30;

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=sp;j++)
			cout<<" ";

		for(j=1;j<=2*i-1;j++){
			if(i==5||j==1||j==(2*i-1))
			{
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		sp--;
		cout<<endl;
	}


}
