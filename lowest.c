#include<stdio.h>
#include<conio.h>
##define INT_SIZE sizeof(int)*8
void main()
{
    int n,s,i;
    clrscr();
    printf("enter a number\n");
    scanf("%d",&n);
    s=INT_SIZE-1;
    for(i=0;i<INT_SIZE;i++)
    {
        if((n>>i)&1)
        {
            s=i;
            break;
        }
    }
    printf("lowest order=%d",s);
    getch();
}