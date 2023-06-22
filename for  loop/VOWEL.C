#include<stdio.h>
#include<conio.h>
void main()
{
    char ch,lwr,upr;
    clrscr();
    printf("Enter your ch:");
    scanf("%c",&ch);
    lwr = (ch == 'a'|| ch == 'e'||ch == 'i'||ch== 'u'||ch== 'o');
    upr = (ch == 'A' || ch== 'E' || ch== 'I' || ch== 'U'|| ch== 'O');
    if(lwr || upr)
    {
    printf("%c is vowel",ch);
    }
    else
    {
    printf("%c is consotant",ch);
    }
    getch();
}


