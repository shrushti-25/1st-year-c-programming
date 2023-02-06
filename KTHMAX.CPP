#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[10]={12,43,14,53,56,54,65,78,22,45};
int i,j,t,b;
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
printf("enter kth value");
scanf("%d",&b);
printf("%d",a[10-b]);
getch();
}


