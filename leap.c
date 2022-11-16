#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  clrscr();
  printf("enter a number\n");
  scanf("%d",&n);
  (n%4==0)?
  printf("leap year\n"):
  printf("not leap year\n");
  getch(); 
}