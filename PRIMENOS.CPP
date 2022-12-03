#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,i,j,c=0;
scanf("%d",&a);
for(i=0;i<=a;i++)
{
c=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
{
c++;

}
}
if (c==2)
{
printf("%d\t",i);
}

}
getch();
}