#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char *a;
    int l;
    clrscr();
    printf("enter a string\n");
    gets(a);
    l=strlen(a);
    printf("length=%d",l);
    getch();
}