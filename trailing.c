#include<stdio.h>
#include<conio.h>
#define INT_SIZE sizeof(int)*8
void main()
{
    int n,c,i;
    clrscr();
    printf("enter a number\n");
    scanf("%d",&n);
    c=0;
    for(i=0;i<INT_SIZE;i++)
    {
        if((n>>i)&1)
        break;
        c++;
    }
    printf("trailing zeros=%d",c);
    getch();
}