#include<stdio.h>
int main()
{
	char str1[50],str2[50],i=0,j=0;
	printf("Enter first string:");
	gets(str1);
	printf("\nEnter second string:");
	gets(str2);
	while(str1[i]!='\0')
	i++;
	while(str2[j]!='\0'){
	str1[i++]=str2[j];
	j++;
	}
	str1[i]='\0';
	printf("\nyour string is : %s",str1);
}