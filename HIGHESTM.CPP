#include<stdio.h>
#include<conio.h>
struct newdatatype
{
int roll;
char name[20];
int marks;
};
typedef struct newdatatype student;
void main()
{
clrscr();
student st1[5];
int i,j,highest=0;
for(i=0;i<=3;i++)
{
printf("Enter roll no.");
scanf("%d",&st1[i].roll);
printf("\nEnter name");
scanf("%s",&st1[i].name);
printf("\nEnter marks out of 10");
scanf("%d",&st1[i].marks);
if(st1[i].marks>highest)
{
highest=st1[i].marks;
j=i;
}
}
printf("\n Higest marks are:");
printf("\n%d",st1[j].marks);
printf("\n%s",st1[j].name);
//printf("the details of the students are\n");
//printf("%d",st1.roll);
//printf("%s",st1.name);
getch();
}

