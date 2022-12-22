#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],i,j,f=0;
    clrscr();
    printf("matrix elements\n");
    for(i=1;i<=3;i++)
    for(j=1;j<=3;j++)
    scanf("%d",&a[i][j]);
    for(i=1;i<=3;i++)
    for(j=1;j<=3;j++)
    {
        if(i!=j&&a[i][j]!=0)
        f=1;
        else
        if(i==j&&a[i][j]!=1)
        f=f+1;
    }
    if(f==0)
    printf("unit matrix\n");
    else
    printf("not unit matrix\n");
    getch();
}