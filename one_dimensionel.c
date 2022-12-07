#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,s=0,p=1,i;
    clrscr();
    printf("set of numbers\n");
    scanf("%d",&n);
    printf("enter one by one\n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        s=s+a[i];
        p=p*a[i];
    }
    printf("sum=%d\n",s);
    printf("product=%d\n",p);
    getch();
}