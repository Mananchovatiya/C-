#include<stdio.h>
int main()
{
	int  qty,disc,gst,price,billamt,amt,total,product,discamt;
	int a[10],b[10],i;
	int t=0,l=0,n=0;
	for(i=0;i<5;i++)
	{
		printf("Enter the price:");
		scanf("\n%d",&a[i]);
		printf("Enter the qty:");
		scanf("\n%d",&b[i]);	
	}
	printf("price\tqty\tamt\tdisc\tdiscamt\tgst\tbillamt");
	for(i=0;i<5;i++)
	{
		amt=a[i]*b[i];
		disc=(amt*10)/100;
		discamt=amt-disc;
		gst=(discamt*18)/100;
		billamt=discamt+gst;
		printf("\n%d\t%d\t%d\t%d\t%d\t%d\t%d",a[i],b[i],amt,disc,discamt,gst,billamt);
		t+=discamt;	
		l+=gst;
		n+=billamt;
	}
	printf("\n\t\t\t\t%d\t%d\t%d",t,l,n);
	
}