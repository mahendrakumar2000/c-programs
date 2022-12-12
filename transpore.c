#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],i,j,r,c;
    clrscr();
    printf("enter order of matrix\n");
    scanf("%d%d",&r,&c);
    printf("matrix elements\n");
    for(i=1;i<=r;i++)
    for(j=1;j<=c;j++)
    scanf("%d",&a[i][j]);
    printf("given matrix\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("transpore matrix\n");
    for(i=1;i<=c;i++)
    {
        for(j=1;j<=r;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
getch();
}