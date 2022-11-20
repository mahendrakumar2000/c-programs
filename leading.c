#include<stdio.h>
#include<conio.h>
#define INT_SIZE sizeof(int)*8
void main()
{
    int n,c,s,i;
    clrscr();
    printf("enter a number\n");
    scanf("%d",&n);
    s=1<<(INT_SIZE-1);
    c=0;
    for(i=0;i<INT_SIZE;i++)
    {
        if((n<<i)&s)
        break;
        c++;
    }
    printf("leading zeros=%d",c);
    getch();
}