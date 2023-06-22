#include<stdio.h>
int coin()
{
	int amt,a,b,c,d,e,f,g,h,i;
	printf("Enter value of amount: ");
	scanf("%d",&amt);
	while(amt>=2000){
		a=amt/2000;
		printf("2000 notes= %d",a);
	}
	while(amt>=500){
		b=amt/500;
		printf("500 notes= %d",b);
	}
	while(amt>=100){
		c=amt/100;
		printf("100 notes= %d",c);
	}
	while(amt>=50){
		d=amt/50;
		printf("50 notes= %d",d);
	}
	while(amt>=20){
		e=amt/20;
		printf("20 notes= %d",e);
	}
	while(amt>=10){
		f=amt/10;
		printf("10 notes= %d",f);
	}
	while(amt>=5){
		g=amt/5;
		printf("5 coins= %d",g);
	}
	while(amt>=2){
		h=amt/2;
		printf("2 coins= %d",h);
	}
	while(amt>=1){
		i=amt/1;
		printf("1 coins= %d",i);
	}
}
int main()
{
	coin();
}