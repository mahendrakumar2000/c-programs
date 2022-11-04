#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,s=0;
    clrscr();
    printf("enter a number\n");
    scanf("%d",&n);
    whlie(n>0
    {
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    printf("reverse=%d",s);
    getch();
}