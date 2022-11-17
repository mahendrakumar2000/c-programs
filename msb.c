#include<stdio.h>
#include<conio.h>
#define BITS sizeof(int)*8
void main()
{
    int n,m;
    printf("enter a number\n");
    scanf("%d",&n);
    m=1<<(BITS-1);
    if(n&m==1)
    printf("msb is set=%d",n);
    else
    printf("msb is not set=%d",n);
    getch();
    }