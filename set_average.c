#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],n,i,sum=0;
    float avg;
    clrscr();
    printf("enter total numbers\n");
    scanf("%d",&n);
    printf("enter one by one\n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("sum of the given numbers=%d\n",sum);
    printf("avg of the given numbers=%f\n",avg);
    getch();
}