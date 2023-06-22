#include<stdio.h>
int main()
{
	char str1[50],str2[50],i=0,j=0,rev;
	printf("Enter your string:");
	gets(str1);
	while(str1[i]!='\0')
	i++;
	rev=i-1;
	while(j<i){
		str2[j]=str1[rev];
		rev--;
		j++;
	}
	str2[j]='\0';
	printf("reverse string is: %s",str2);
}