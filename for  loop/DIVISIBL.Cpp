#include<iostream>

int s()
{
	int i,n,t=0;
	std::cout << "Enter value of n:";
	std::cin >> n;
	for(i=1;i<=n;i++)
	{
		std::cout << "\n" << ++i << " ";
		t = t + i;
	}
	std::cout << "\nTotal is:" << t;
}
int main()
{
	s();
}