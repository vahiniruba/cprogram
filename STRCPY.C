#include<stdio.h>
#include<string.h>
void main()
{
 int i=0;
 char a[200],b[200];
 clrscr();
 printf("\nEnter the string to be copied\t");
 scanf("%s",a);
 /*while(a[i]!='\0')
 {
    b[i]=a[i];
    i++;
 } */
 for(i=0;a[i]!='\0';i++)
  {
    b[i]=a[i];
    i++;
 }
 b[i]='\0';
 printf("\n\tNow the copied string is\t%s",b);
 getch();
}
