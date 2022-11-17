#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("enter a number\n");
    scanf("%d",&n);
    if(n&1)
    printf("least is set=%d",n);
    else
    printf("least is not set=%d",n);
    getch();
    }