#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e,f;
    clrscr();
    printf("enter a number\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("add=%d",c);
    printf("sub=%d",d);
    printf("mul=%d",e);
    printf("div=%d",f);
    getch();
    }