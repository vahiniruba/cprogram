#include<stdio.h>
void main()
{
 int dvnd,divi;
 float quo,rem;
 clrscr();
 printf("\n\tEnter the Dividend\t");
 scanf("%d",&dvnd);
 printf("\n\tEnter the Divisor\t");
 scanf("%d",&divi);
 quo=dvnd/divi;
 printf("\n\tQUOTIENT FOR %d:\t%.2f",dvnd,quo);
 rem=dvnd%divi;
 printf("\n\tREMAINDER FOR %d\t%.2f",dvnd,rem);
 getch();
}