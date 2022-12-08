#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,n,b,s;
    clrscr();
    printf("set of numbers\n");
    scanf("%d",&n);
    printf("enter one by one\n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    b=a[1];
    s=a[1];
    for(i=2;i<=n;i++)
    {
        if(a[i]>b)
        b=a[i];
        if(a[i]<s)
        s=a[i];
    }
    printf("maximum=%d\n",b);
    printf("minimum=%d\n",s);
    getch();
}