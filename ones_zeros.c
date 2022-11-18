#include<stdio.h>
#include<conio.h>
#define INT_SIZE sizeof(int)*8
void main()
{
    int n,s,c,i;
    clrscr();
    printf("enter a number\n");
    scanf("%d",&n);
    s=0;
    c=0;
    for(i=0;i<INT_SIZE;i++)
    {
        if(n&1)
        c++;
        else
        s++;
        n=n>>1;
        printf("total zeros=%d\n",s);
        printf("total ones=%d",c);
        getch();
    }
}