#include<stdio.h>
#include<string.h>
#include<conio.h>
struct newdatatype
{
int roll;
char name[20];
};
struct temp
{
char tname[20];
};
typedef struct temp temp;
typedef struct newdatatype student;
void main()
{
student st[5];
temp t[5];
int i,j,temp;
clrscr();
for(i=0;i<=4;i++)
{
printf("Enter roll no.\n");
scanf("%d",&st[i].roll);
printf("\nEnter student name\n");
scanf("%s",&st[i].name);
clrscr();
}
for(i=0;i<=4;i++)
{
for(j=0;j<=4;j++)
{
if(st[j].roll>st[j+1].roll)
{
temp=st[j].roll;
st[j].roll=st[j+1].roll;
st[j+1].roll=temp;


strcpy(t[i].tname,st[i].name);
strcpy(st[i].name,st[j].name);
strcpy(st[j].name,t[i].tname);
 }
}
}
printf("\nThe detailes of entered students are:\n");
for(i=0;i<=4;i++)
{
printf("%d ",st[i].roll);
printf("%s\n",st[i].name);
}
getch();
}
