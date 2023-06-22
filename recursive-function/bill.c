 #include<stdio.h>
struct bill
{
	int num,rate,qty,total;
	char name[50];
	float dis,gst,billamt,netbill;
};
int main()
{
	struct bill a[4];
	int i;
	for(i=0;i<2;i++)
	{
		printf("Enter num: ");
		scanf("%d",&a[i].num);
		printf("Enter name: ");
		scanf("%s",&a[i].name);
		printf("Enter rate: ");
		scanf("%d",&a[i].rate);
		printf("Enter qty: ");
		scanf("%d",&a[i].qty);
	}
	printf("\nnumber\tproduct\trate\tqty\ttotal\tdis\tbillamt\tgst\tnetbill");
	for(i=0;i<2;i++)
	{
		a[i].total=a[i].rate*a[i].qty;
		a[i].dis=a[i].total*5/100;
		a[i].billamt=a[i].total-a[i].dis;
		a[i].gst=a[i].billamt*18/100;
		a[i].netbill=a[i].billamt+a[i].gst;
	printf("\n%d\t%s\t%d\t%d\t%d\t%.2f\t%.2f\t%.2f\t%.2f",a[i].num,a[i].name,a[i].rate,a[i].qty,a[i].total,a[i].dis,a[i].billamt,a[i].gst,a[i].netbill);
	}
}