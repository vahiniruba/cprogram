#include<stdio.h>
void main()
{
  int i;
  float a,sum=0,avg=0;
  clrscr();
  printf("\n\t\tTO FIND SUM & AVERAGE OF 4 NUMBERS");
  for(i=0;i<4;i++)
  {
  printf("\nEnter the 4 numbers: \t");
  scanf("%f",&a);
  sum+=a;
  }
  printf("\n\t\tThe sum of 4 numbers is\t %f",sum);
  avg=sum/4;
  printf("\n\tThe average of 4 numbers is %.3f",avg);
  getch();
}
