#include<stdio.h>
void main()
{
 int ch,y;
 float a,b,c;
 clrscr();
 do
 {
 printf("\n\tCALCULATOR PROGRAM\t");
 printf("\n\tEnter the I number \t");
 scanf("%f",&a);
 printf("\n\tEnter the II number \t");
 scanf("%f",&b);
 printf("\n\tEnter your choice:\t");
 scanf("%d",&ch);
 printf("\nADDITION");
  printf("\nSUBTRACTION"); printf("\nMULTPLCATION"); printf("\nDIVISION");
 switch(ch)
 {
  case 1:
	 printf("To add 2 numbers :\t");
	 c=a+b;
	 printf("The sum of %f\t and %f\t is %f\t",a,b,c);
	 break;
  case 2:
	 printf("\n\tTo subtract 2 numbers :\t");
	 c=a-b;
	 printf("\nThe difference of %f\t and %f\t is %f\t",a,b,c);
	 break;
  case 3:
	 printf("\n\tTo multiply 2 numbers :\t");
	 c=a*b;
	 printf("\nThe product of %f\t and %f\t is %f\t",a,b,c);
	 break;
 case 4:
	 printf("To divide 2 numbers :\t");
	 c=a/b;
	 printf("The division of %f\t and %f\t is %f\t",a,b,c);
	 break;
 default:
	 break;
 }//switch ends
  printf("\n\tDo u want to continue press 1/0:");
 scanf("%d",&y);
 }//do ends
 while(y==1);

 getch();
}
