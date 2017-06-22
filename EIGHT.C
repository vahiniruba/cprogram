#include<stdio.h>
void main()
{
float f,i,c,p,res,a;
 int l,bch,y;
 clrscr();
 do
 {
 printf("\n\tEnter your choice :\t");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
	printf("\n\t\tAREA OF RECTANGLE :");
	printf("\n\tEnter the length :\t");
	scanf("%d",&l);
	printf("\n\tEnter the breadth :\t");
	scanf("%d",&b);
	res=l*b;
	printf("%d%d",l,b);
	printf("The area of rectangle is %.2f",res);
	break;
  case 2:
	printf("\n\t\tAREA OF CIRCLE :");
	printf("\n\tEnter radius :\t");
	scanf("%f",&a);
	res=3.14*a*a;
	printf("The area of circle is \t%f",res);
	break;
  case 3:
	printf("\n\t\tFEET TO INCHES :");
	printf("\n\tEnter the feet value :\t");
	scanf("%f",&f);
	res=12*f;
	printf("The area of rectangle is \t%f",res);
	break;

    default:
	      break;
  }//switch ends
 printf("\n\tDo u want to continue press 1/0");
 scanf("%d",&y);
 }//do
 while(y==1);
getch();

}
