#include<iostream>
using namespace std;

int main()
{
	float basic,gross,da,hra;
	cout<<"Enter the employee basic salary:";
	cin>>basic;

	if(basic<=5000)
	{
		da = basic*0.2;
		hra = basic*0.08;
	}
	else if(basic>=5000&&basic<=10000)
	{
		da =  basic*0.3;
		hra =  basic*0.12;
	}
	else{
		if(basic>=10000&&basic<=15000)
		{
			da = basic*0.4;
			hra = basic*0.15;
		}
		else if(basic>15000)
		{
			da =  basic*0.5;
			hra =  basic*0.20;
		}

	}
	gross =  da + hra + basic;
	cout<<"GROSS SALARY  OF EMPLOYEE:"<<gross;
}
