#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m,k;
    clrscr();
    printf("enter a number\n");
    scanf("%d",&n);
    printf("enter nth bit to set(0-31)\n");
    scanf("%d",&m);
    k=(1<<m)|n;
    printf("set bit=%d",m);
    printf("set=%d",k);
    getch();
}