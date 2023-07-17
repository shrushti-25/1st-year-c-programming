#include<stdio.h>
#include<conio.h>
void shortest(int a[10]);
void main()
{
 clrscr();
 int i;
 int a[10]={9,7,2,5,3,4,0,1,6,8};
 printf("The Shortest to largest job sizes are as follows:\n");
 for(i=0;i<=20;i++)
 {
 shortest(a);
 }
 //printf();
 getch();
}
 void shortest (int a[10])
 {
 int i,j=0,min=a[0];
 for(i=1;i<=9;i++)
 {
	if(a[i]<min)
	{
	 min=a[i];
	 j=i;
	}
 }
 printf("Job Index:%d\tJob Size%d\n",j,min);
 a[j]=100;
/* for(i=0;i<=9;i++)
 {
 printf("\n%d",a[i]);
 }*/
 }