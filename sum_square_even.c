#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum=0;
    clrscr();
    printf("enter limit\n");
    scanf("%d",&n);
    for(i=2;i<=n;i+2)
    sum=sum+i*i;
    printf("sum of square of even=%d\n",sum);
    getch();
    
}