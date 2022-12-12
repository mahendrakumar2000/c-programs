#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[3][3],i,j;
    clrscr();
    printf("enter terms one by one \n");
    for(i=1;i<=3;i++)
    for(j=1;j<=3;j++)
    scanf("%d",&a[i][j]);
    printf("output\n");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
    getch();
}