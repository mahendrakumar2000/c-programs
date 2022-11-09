#include<stdio.h>
#include<conio.h>
void main()
{
    int k=65,i,j,n;
    clrscr();
    printf("enter a limit\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf("%c  ",k++);
        printf("\n");
    }
    getch();
}