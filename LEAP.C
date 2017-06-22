#include<stdio.h>
void main()
{
 int leap;
 printf("\nEnter the year to be checked\t:");
 scanf("%d",&leap);
 if((leap%4)==0)
 {
   if((leap%100)==0)
   {
    if((leap%400)==0)
     {
       printf("\n\tThe given year %dis a leap year",leap);
     }//leap ends
     else
     {
	printf("\n\tThe given year %dis not a leap year",leap);
    }
   }
      else
     {
	printf("\n\tThe given year %dis not a leap year",leap);
    }
 }
      else
     {
	printf("\n\tThe given year %dis not a leap year",leap);
    }
 getch();
}