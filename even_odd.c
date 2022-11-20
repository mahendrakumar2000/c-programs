#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("enter a number\n");
    scanf("%d",&n);
    if(n&1)
    printf("number is odd=%d",n);
    else
    printf("number is even=%d",n);
    getch();
}