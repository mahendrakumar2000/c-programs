#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m,k;
    clrscr();
    printf("enter a number\n");
    scanf("%d",&n);
    printf("enter nth bit to toggle(0-31)\n");
    scanf("%d",&m);
    k=n^(1<<m);
    printf("toggle=%d",k);
    getch();
}