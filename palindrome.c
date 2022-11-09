#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[50];
    int l,t=1,i;
    clrscr();
    printf("enter a string\n");
    scanf("%s",a);
    l=strlen(a);
    printf("%s\n",strrev(a));
    for(i=0;i<l;i++)
    if(a[i]!=a[l-i-1])
    t=0;
    if(t==1)
    printf("the string is palindrome\n");
    else
    printf("the string is not palindrome\n");
    getch();
}