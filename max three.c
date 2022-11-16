#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d;
    clrscr();
    printf("enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    d=(a>b&&a>c)?a:(b>c)?b:c;
    printf("maximum=%d",d);
    getch();
}