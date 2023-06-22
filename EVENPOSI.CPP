#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
 int i,a[5]={0,1,2,2,1};
 for(i=2;i<=4;i=i+2)
 {
	if(i%2==0)
	{
	if(a[i]>a[i-1] )
	{
	printf("%d %d",a[i-1],a[i]);
	}
	else
	{
	printf("%d %d",a[i],a[i-1]);
	}

	}
 }
 getch();
}