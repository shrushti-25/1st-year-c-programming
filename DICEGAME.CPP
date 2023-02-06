#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
clrscr();
int a;
printf("Dice Game");
do
{

printf("\npress 1 to continue and any key to exit");
scanf("%d",&a);
if(a==1)
{
switch(rand()%8)
{
case 1:printf("unlucky 1");
	break;
case 2:printf("two");
	break;
case 3:printf("3 get free");
	break;
case 4:printf("4,get a chance more");
	break;
case 5:printf("5,fly high");
       break;
case 6:printf("6,theluckiest one");
	break;
default:printf("bad luck");
}
}
else
exit(0);
}
while (1);
getch();
}
