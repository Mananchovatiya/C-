#include<stdio.h>
int amt (int n){
    int coin[] ={
        2000,500,200,100,50,20,10,5,2,
       5000
    };
    for(int i=0;i<=10;i++)
    {
        if(n>=coin[i]){

            printf("%d-%d\n",coin[i],n/coin[i]);
            n=n%coin[i];
        }
    }
}
int main()
{
    amt(5648);
}