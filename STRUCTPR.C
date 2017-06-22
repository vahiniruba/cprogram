#include<stdio.h>
struct computer
{
  int cid;
  char monitor[20];
  char mouse[20];
  char cpu[20];
  char ram[20];
  float price;
};
void main()
{
    int id;
      char mon[200],mouse[20],cpu[20],ram[20];
       struct computer com;
       float price;
       clrscr();

   printf("\n\tSTRUCTURE PROGRAM");
   printf("\nEnter monitor name:\t");
   scanf("%s",&mon);
     strcpy(com.monitor,mon);
   printf("\nEnter ID:\t");
   scanf("%d",&id);
   com.cid=id;
   printf("\nEnter mouse name:\t");
   scanf("%s",&mouse);
   strcpy(com.mouse,mouse);
   printf("Enter cpu name:\t");
   scanf("%s",&cpu);
      strcpy(com.cpu,cpu);
   printf("Enter RAM SIZE:\t");
   scanf("%s",&ram);
   strcpy(com.ram,ram);
   printf("Enter price:\t");
   scanf("%f",&price);
   com.price=price;
  printf("\n\t\t\tABOUT COMPUTER\n");
  printf("\n\t\t\t--------------\n");

  printf("\nID\t\t       :%d",com.cid);
  printf("\nMONITOR\t    :%s",com.monitor);
  printf("\nMOUSE\t\t     :%s",com.mouse);
   printf("\nRAM\t\t     :%s",com.ram);
   printf("\nCPU\t\t     :%s",com.cpu);
   printf("\nPRICE\t     :%f",com.price);
   getch();
 }