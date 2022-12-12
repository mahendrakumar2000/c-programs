#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],i,j,r,c;
    clrscr();
    printf("enter row & column numbers\n");
    scanf("%d%d",&r,&c);
    printf("enter matrix elements\n");
    for(i=1;i<=r;i++)
    for(j=1;i<=c;j++)
    scanf("%d",&a[i][j]);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
    getch();
}