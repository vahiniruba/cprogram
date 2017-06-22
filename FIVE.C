#include<stdio.h>
void main()
{
 int a,i=0;
 clrscr();
 printf("\n\tCheck whether the given no is odd or even");
 printf("\n\tEnter the number of times to check the value:\t");
 scanf("%d",&a);
 while(i<a)
 {

 if((i%2)==0)
 {
    printf("\n\tThe given no is even");
 }
 else
 {
  printf("\n\tThe given no is odd ");
 }
 }
 getch();
}
