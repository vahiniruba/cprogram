#include<stdio.h>
void main()
{
 int p,n;
 float r,si;
 printf("\n\tEnter the principal\t");
 scanf("%d",&p);
 printf("\n\tEnter the rate of interest\t");
 scanf("%f",&r);
 printf("\n\tEnter the no.of years\t");
 scanf("%d",&n);
 si=(p*n*r)/100;
 printf("\n\tSIMPLE INTEREST:\t%.2f",si);
 getch();
}