#include<stdio.h>
void main()
{
 int a;
 clrscr();
 printf("\nEnter the given number");
 scanf("%d",&a);
 if((a%2)==0)
 printf("\nThe given number is even");
 else
  printf("\nThe given number is odd");
  getch();
}