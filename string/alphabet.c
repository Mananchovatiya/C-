#include<stdio.h>
int main()
{
	char a[50];
	int len=0;
	printf("Enter your string: ");
	gets(a);
	while(a[len]!='\0'){
			len++;	
	}
	int i=0;
	int j=len-1;
	while(i<len/2)
	{	
		printf("%c%c",a[i],a[j]);
		i++;
		j--;	
	}
	if(len%2!=0){
	printf("%c",a[len/2]);}
	printf("\n");
}