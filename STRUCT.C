#include<stdio.h>
#include<conio.h>
struct newdatatype
{
int roll;
char name[20];
};
typedef struct newdatatype student;
void main()
{
student st[5];
int i,j;
clrscr();
for(i=0;i<=4;i++)
{
printf("Enter roll no.\n");
scanf("%d",&st[i].roll);
printf("\nEnter student name\n");
scanf("%s",&st[i].name);
clrscr();
}
printf("\nThe detailes of entered students are:\n");
for(i=0;i<=4;i++)
{
printf("%d ",st[i].roll);
printf("%s\n",st[i].name);
}
getch();
}
