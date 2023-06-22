#include<stdio.h>
int s()
{
 char ch,lwr,upr;
    printf("Enter your ch:");
    scanf("%c",&ch);
    lwr = (ch == 'a'|| ch == 'e'||ch == 'i'||ch== 'u'||ch== 'o');
    upr = (ch == 'A' || ch== 'E' || ch== 'I' || ch== 'U'|| ch== 'O');
int  r()
{
    if(lwr || upr)
    {
    printf("%c is vowel",ch);
    }
    else
    {
    printf("%c is consotant",ch);
    }
}
 return ch;	
}
int main()
{
   s();
	r();
}


