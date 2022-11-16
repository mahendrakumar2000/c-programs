#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("enter a number\n");
    scanf("%d",&n);
    (n%2==0)?printf("even"):printf("odd");
    getch();
    }