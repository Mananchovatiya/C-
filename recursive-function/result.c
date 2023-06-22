#include<stdio.h>
int dis(int maths,int sci,int eng,int total,float per)
{
	printf("maths\tsci\teng\ttotal\tper\n");
	printf("%d\t%d\t%d\t%d\t%.2f\n",maths,sci,eng,total,per);
}
int calc(int maths,int sci,int eng)
{
	int total;
	float per;
	total=maths+sci+eng;
	per=(float)total/3;
	dis(maths,sci,eng,total,per);
}
int setdata()
{
	int maths,sci,eng;
	printf("Enter maths marks: ");
	scanf("%d",&maths);
	printf("Enter sci marks: ");
	scanf("%d",&sci);
	printf("Enter eng marks: ");
	scanf("%d",&eng);
	calc(maths,sci,eng);
}
int main()
{
	setdata();
}