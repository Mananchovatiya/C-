#include<stdio.h>
#include<conio.h>
void main()
{
	float celsius,fahrenheit;
	clrscr();
	printf("Enter the value of celsius:");
	scanf("%f",&celsius);
	fahrenheit  = celsius*(9/5)+32;
	printf("%f celsius: %f fahrenheit",celsius,fahrenheit);
	getch();

}