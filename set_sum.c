#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[50],i,s=0;
    clrscr();
    printf("enter total numbers\n");
    scanf("%d",&n);
    printf("enter one by one\n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    s=s+a[i];
    printf("sum=%d\n",s);
    getch();
}