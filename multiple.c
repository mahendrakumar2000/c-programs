#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[100],i,t;
    clrscr();
    printf("set of numbers\n");
    scanf("%d",&n);
    printf("enter one by one\n");
    for(i=1;i<=n;i++);
    scanf("%d",&a[i]);
    printf("multiples of five\n");
    for(i=1;i<=n;i++)
    {
        if(a[i]%5==0)
        printf("%d\n",a[i]);
    }
    getch();
}