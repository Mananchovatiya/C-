#include<stdio.h>
int main()
{
	int i,j,sp=10;
	 i=1;
	do
	{	j=1;
	   while(j<=sp){
	     	printf(" ");
		j++;}j=1;
	     	while(j<=i){
	    		 if(i==1||i==5||j==1||j==i)
	    		 {
	    			 printf(" * ");
	   		 }
	    		 else
	    		 {
	    			 printf("   ");
	    		 }
			j++;
		}
	     sp--;
	     printf("\n");
	i++;
	}while(i<=5);
	 
}