#include<stdio.h>
int s()
{
	float celsius,fahrenheit;
	printf("Enter the value of celsius:");
	scanf("%f",&celsius);
	fahrenheit  = celsius*(9/5)+32;
	printf("%f celsius: %f fahrenheit",celsius,fahrenheit);

}
int main()
{
	s();
}