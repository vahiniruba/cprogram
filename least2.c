#include <stdio.h>

int main(void) {
	int a,i,x[10],j,k,count,d;
	printf("Enter the Number : ");
	scanf("%d",&a);
	printf("Enter no. of digits you want to display : ");
	scanf("%d",&d);
	for(i=0;a>0;i++)
	{
		x[i]=a%10;
		a=a/10;
	}
	count=i;
	for(i=0;i<count;i++)
	{
		printf("%d\t",x[i]);
	}
	for(i=0;i<count;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(t[i]>t[j])
			{
				k=x[i];
				x[i]=x[j];
				x[j]=k;
			}
		}
	}
	printf("\nAfter Sorting");
	for(i=0;i<count;i++)
	{
		printf("\n%d\t",x[i]);
	}
	printf("\nDigits :");
	for(i=0;i<d;i++)
	{
		printf("\t%d",x[i]);
	}
	return 0;
}