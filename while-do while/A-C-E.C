#include<stdio.h>
int main()    
{
    char i,j;
    i=1;
    do 
    {	j=1;
	while(j<=3){   
		printf("%c, ",i+64);
		j++;
	}
	printf("\n");
	i++;
    }while(i<=5) ;
 
}


