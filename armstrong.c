#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,s=0,t;
    clrscr();
    printf("enter a number\n");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        s=s+r*r*r;
    }
    if(t==s)
    printf("number is armstrong\n");
    else
    printf("noumber is not armstrong\n");
    getch();
}