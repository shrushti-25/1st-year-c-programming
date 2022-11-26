#include<conio.h>
#include<stdio.h>
void main()
{
int num,c,i;
printf("enter number for table");
scanf("%d",&num);
for(i=1;i<=10;i++)
{
c=num*i;
printf("%d*%d=%d\n",num,i,c);
}
getch();
}
