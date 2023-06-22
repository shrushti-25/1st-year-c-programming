#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10]={1,7,3,9,2,6,3,0,8,5};
 int i,j;
 for(i=1;i<=8;i++)
 {
	if(a[i-1]<a[i] && a[i]>a[i+1])
	{
	  printf("\n%d",a[i]);
	}
 }
 getch();
}