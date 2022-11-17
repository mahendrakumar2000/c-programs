#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m,o;
    clrscr();
    printf("enter a number\n");
    scanf("%d",&n);
    printf("enter nth bit to check(0-31)");
    scanf("%d",&m);
    o=(n>>m)&1;
    printf("bit=%d",m);
    printf("get=%d",o);
    getch();
}