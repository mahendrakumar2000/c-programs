#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    c=(a>b)? a:b;
    printf("maximum=%d",c);
    getch();
}