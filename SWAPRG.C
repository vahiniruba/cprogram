#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,t;
  clrscr();
  printf("\n\tEnter the first value:");
  scanf("%d",&a);
  printf("\n\tEnter the second value:");
  scanf("%d",&b);
 // t=a;
 // a=b;
 // b=t;
 a=a+b;
 b=a-b;
 a=a-b;
  printf("\n\tAfter swapping%d and %d",a,b);
  getch();
}
