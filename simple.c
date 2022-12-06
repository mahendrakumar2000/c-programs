#include<stdio.h>
#include<conio.h>
void main()
{
    float p,n,r,si;
    clrscr();
    printf("enter p,n,r value\n");
    scanf("%f%f%f",&p,&n,&r);
    si=(p*n*r)/100;
    printf("simple interest=%f\n",si);
    getch();
}