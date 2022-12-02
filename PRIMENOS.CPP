#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i;
printf("prime no.s between 1-50");
for(i=1;i<=50;i++)
{
if(i%2!=0 && i%3!=0)

printf("%d\n",i);
}
getch();
}