#include<stdio.h>
#include<conio.h>
void main()
{
    int n,x,i,a[100],c=1;
    clrscr();
    printf("set of numbers\n");
    scanf("%d",&n);
    printf("enter one by one\n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    printf("enter the number to be searched\n");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        if(a[i]==x)
        c=0;
    }
    if(c==0)
    printf("the number is perfect\n");
    else
    printf("the number is not perfect\n");
    getch();
}