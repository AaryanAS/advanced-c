#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct ndt
 {
  int data;
  struct ndt *next;
  };
  typedef struct ndt node;
	    node * start;
void disp(void);
void create(void);
void insert(void);
void maxa(void);
void delast(void);
void delfirst(void);
void search(void);
void delbet(void);
void main()
{
int ch;
clrscr();
do
{
printf("\n enter \n 1 to create\n 2 to insert\n 3 to display\n 4 to exit\n 5 to print max \n 6 to delete last\n 7 to delete first\n 8 to search data\n 9 to delete data\n");
scanf("%d",&ch);
clrscr();
switch(ch)
{
case 1:create(); break;
case 2:insert(); break;
case 6:delast(); break;
case 3:disp();break;
case 4:exit(0);
case 5:maxa(); break;
case 7:delfirst(); break;
case 8:search();break;
case 9:delbet();break;
default:
printf("\ninvalid input\n");
break;
}
}
while(1);
}
void disp(void)
{
node * temp1;
temp1=start;
printf("start");
while(temp1!=NULL)
{printf("-->%d",temp1->data);
temp1=temp1->next;
}
}
void insert(void)
{
node *temp,*temp1;
temp1=start;
while(temp1->next!=NULL)
{
temp1=temp1->next;
}
temp=(node *)malloc(sizeof(node *));
if(temp==NULL)
{
printf("\nMemory not allocated\n");
}
else
{
printf("Enter Data\n");
scanf("%d",&temp->data);
temp->next=NULL;
temp1->next=temp;
printf("press any key to continue");
getch();
clrscr();
}
}
void create(void)
{
node *temp;
temp=(node*)malloc(sizeof(node));
if(temp!=NULL)
{
printf("Enter value of data\n");
scanf("%d",&temp->data);
temp->next=NULL;
start=temp;
printf("Press any key to continue");
getch();
clrscr();
}
else
{printf("memory could not be allocated by operating");
}
}
void maxa()
{
node *temp;
int max=0;
temp=start;
while(temp!=NULL)
{
if(max<temp->data)
{
max=temp->data;
}
temp=temp->next;
}
printf("\nMAX=%d",max);
}
void delast(void)
{
 node *temp1, *temp2;
 temp1=start;
 while(temp1->next->next!=NULL)
 {
 temp1=temp1->next;
 }
 temp2=temp1->next;
 free(temp2);
 temp1->next=NULL;
}

void delfirst(void)
{
node *temp;
temp=start;
start=start->next;
free(temp);
}
void search(void)
{
node *temp;
int item,mark=1;
temp=start;
printf("\nEnter wanted value");
scanf("%d",&item);
while(temp->data!=item)
{
 temp=temp->next;
 mark++;
}
printf("\n%d found at %d node",item,mark);
}
void delbet(void)
{
node *temp2, *temp, *temp1;
int item;
temp=start;
printf("\nEnter value to be deleted \n");
scanf("%d",&item);
while(temp->next->data!=item)
{
 temp=temp->next;
}
temp1=temp;
temp=temp->next;
temp2=temp->next;
free(temp);
temp1->next=temp2;
}
