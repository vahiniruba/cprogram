#include<stdio.h>
void main()
{
  int i,n,r,res;
  printf("Enter the number of terms :");
  scanf("%d",&r);
  printf("Enter the multiplier");
  scanf("%d",&n);
  printf("\nThe MULTIPICATION TABLE:\n");
  for(i=1;i<=r;i++)
   {
	res=i*n;
	printf("%d*%d=%d\n",i,n,res);
   }
   getch();
}