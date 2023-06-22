#include<stdio.h>
int main()
{
	int a[5],b[5],c[5],total,per,i;
	for(i=0;i<5;i++)
	{
		printf("Enter the science marks of student %d:\n ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("Enter the maths marks of student %d:\n ",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("Enter the english marks of student %d:\n ",i);
		scanf("%d",&c[i]);
	}
	printf("science\tmaths\tenglish\ttotal\tper\tGrade");
	for(i=0;i<5;i++)
	{
		total=a[i]+b[i]+c[i];
		per=(a[i]+b[i]+c[i])/3;
		printf("\n%d\t%d\t%d\t%d\t%d",a[i],b[i],c[i],total,per);
		if(a[i]<35 || b[i]<35 || c[i]<35){
				printf("\tFail.....");
		}
		else if(per>=80)
		{
				printf("\tGrade A");
		}
		else if(per>=65&&per<80)
		{
				printf("\tGrade B");
		}
		else if(per>=50&&per<65)
		{
				printf("\tGrade C");
		}		
		else if(per>=35&&per<50)
		{
				printf("\tGrade D");		
		}
	}
}