#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int i,max=0;
int a[10]={10,20,30,40,50,60,70,80,90,100};
for(i=0;i<=10;i++)
{
if(max<a[i])
{
 max=a[i];

}
}
 printf("%d",max);
getch();
}
