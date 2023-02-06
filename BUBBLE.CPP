#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int a[10],i,j,t;
printf("enter 10 inputs");
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=9;i++)
{
for(j=0;j<=9;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
for(i=0;i<=9;i++)
{
printf("%d\n",a[i]);
}
getch();
}
