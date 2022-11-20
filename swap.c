#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    clrscr();
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf("swap =%d",a);
    printf("swap=%d",b);
    getch();
}