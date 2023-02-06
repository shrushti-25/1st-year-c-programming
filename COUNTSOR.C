#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int i,j;
int A[]={1,2,4,3,6,5,7,8};
int B[10]={0};
for(i=0;i<=8;i++)
{
B[A[i]]=B[A[i]]+1;
}
for(i=1;i<=9;i++)
{
printf("\n%d %d\n",i,B[i]);
}
for(i=0;i<=9;i++)
{
for(j=1;j<=B[i];j++)
{
printf("%d",i);
}
}
getch();
}
