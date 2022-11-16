#include<stdio.h>
#include<conio.h>
void main()
{
    char mk;
    clrscr();
    printf("enter any character\n");
    scanf("%c",&mk);
    (mk>='a'&&mk<='z')
    ||(mk>='A'&&mk<='Z')?
    printf("it is alphabet"):
    printf("it is not alphabet");
    getch();
    }