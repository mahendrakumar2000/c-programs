#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    clrscr();
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=31;i>=0;i--)
    {
        if(n&(1<<i))
        printf("1");
        else
        printf("0")
    }
    getch();
}