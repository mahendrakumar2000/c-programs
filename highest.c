#include<stdio.h>
#include<conio.h>
#define INT_SIZE sizeof(int)*8
void main()
{
    int n,s=-1,i;
    clrscr();
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=0;i<INT_SIZE;i++)
    {
        if((n>>i)&1)
        s=i;
    }
    if(s!=-1)
    printf("order is highest=%d",s);
    else
    printf("order is not highest=%d",s);
    getch();
}