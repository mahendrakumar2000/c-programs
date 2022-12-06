#include<stdio.h>
#include<conio.h>
void main()
{
    float r,v;
    clrscr();
    printf("enter r value\n");
    scanf("%f",&r);
    v=4.0/3.0*3.14*r*r*r;
    printf("volume of sphere=%f\n",v);
    getch();
}