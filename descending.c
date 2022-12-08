#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[20],i,j,t;
    clrscr();
    printf("set of numbers\n");
    scanf("%d",&n);
    printf("enter terms one by one\n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n-1;i++)
    for(j=i+1;j<=n;j++)
    if(a[i]<a[j])
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    printf("descending order\n");
    for(i=1;i<=n;i++)
    printf("%d\n",a[i]);
    getch();
}