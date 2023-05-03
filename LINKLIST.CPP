#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct shrush
{
int data;
struct shrush* next;
};
shrush* start=NULL;
void create();
void insert();
void display();
void max();
void main()
{
clrscr();
int choose;
do{
	printf("Enter 1 for Create,2 for Insert,3 for Display,4 to find max,5 for exit");
	scanf("%d",&choose);
	switch(choose)
		{
		case 1:create(); break;
		case 2:insert(); break;
		case 3:display(); break;
		case 4:max();     break;
		case 5:exit(0);
		}
  }while(1);
}

void create()
{
 shrush* temp;
 int a;
 temp=(shrush*)malloc(sizeof(shrush*));
 if(temp==NULL)
 {
  printf("no memory aloocated");
 }
 else
 {
  printf("enter value");
  scanf("%d",&a);
  temp->data=a;
  temp->next=NULL;
  start=temp;
  printf("\nNODE INSERTED\n");
 }
}

void display()
{
 shrush* temp;
 temp=start;
/* if(temp==NULL)
 {
  printf("nothing to point\n");
 }
 else
 { */
  while(temp!=NULL)
  {
   printf("%d...\n",temp->data);
   temp=temp->next;
  }

}

void insert()
{
 shrush* ptr,*temp;
 int a;
 ptr=(shrush*)malloc(sizeof(shrush*));
 if(ptr==NULL)
 {
 printf("No memory");
 }
 else
 {
 scanf("%d",&a);
 ptr->data=a;
// if(start==NULL)
// {
  ptr->next=NULL;
 // start=ptr;
// }
 }
temp=start;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=ptr;
}
void max()
{
struct node*temp;
}
