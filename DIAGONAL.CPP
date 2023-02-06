#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[3][3]={1,2,3,
	     1,2,3,
	     1,2,3};
int i,j;
//printf("enter nine values in  a,b,c form");
//for(i=0;i<3;i++)
//{
// for(j=0;j<3;j++)
// {
 // scanf("%d",&a[i][j]);
//}
//}
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {

  if(i==j)
  {
   printf("%d",a[i][j]);
  }
 printf("\t");
 }
 printf("\n");
}
getch();
}



