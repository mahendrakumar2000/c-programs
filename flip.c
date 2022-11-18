#include<stdio.h>
#include<conio.h>
void main()
{
    int n,s;
    clrscr();
    printf("enter a number\n");
    scanf("%d",n);
    s=~n;
    printf("flip number=%d",s);
    getch();
}