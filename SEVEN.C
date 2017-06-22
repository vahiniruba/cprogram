#include<stdio.h>
void main()
{
 int eid;
 char ename[20];
 int esal,tax,income;
 clrscr();
  printf("\n\t\t\tEMPLOYEE DETAILS:\t");
  printf("\n\tEMPLOYEE ID:\t\t\t");
 scanf("%d",&eid);
 printf("\n\tEMPLOYEE NAME:\t\t\t");
 scanf("%s",&ename);
 printf("\n\tEMPLOYEE SALARY:\t\t\t");
 scanf("%d",&esal);
 tax=esal/8;
  printf("\n\tEMPLOYEE ID :\t\t\t%d",eid);
  printf("\n\tEMPLOYEE NAME :\t\t\t%s",ename);
 printf("\n\tEMPLOYEE SALARY :\t\t\t%d",esal);
 printf("\n\tEMPLOYEE TAX :\t\t\t%d",tax);
 income=tax*100;
 printf("\n\tEMPLOYEE INCOME:\t\t\t%d,income);
getch();
}
