#include<stdio.h>
#include<conio.h>
void main()
{
	int unit;
	float bill,sur_charge;
	clrscr();
	printf("Enter value of unit:");
	scanf("%d",&unit);
	if(unit <=100){
		bill  = 50 + unit * 0.6;
	}
	else if(unit<=300){
		bill = 50 + 60 +(unit - 100) * 0.8;
	}
	else{
		bill = 50 + 60 + 160 + (unit -300)*0.9;
	}
	printf("Your  bill amount is: %f",bill);
	if(bill>=300)
	{
		sur_charge = bill*0.15;
		bill  = bill + sur_charge;
		printf("\nYour sur_charge is: %f",sur_charge);
		printf("\nYour  final bill amt: %f",bill);
	}
	getch();
}