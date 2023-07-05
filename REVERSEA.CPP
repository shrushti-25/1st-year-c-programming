#include<stdio.h>
#include<conio.h>
void reverseArray(int a[10]);
void main()
{
 clrscr();
 int a[10]={0,1,2,3,4,5,6,7,8,9};
 int i;
 printf("The array is:\n");
 for(i=0;i<=9;i++)
 {
	printf("\n%d",a[i]);
 }
 reverseArray(a);
 getch();
}
void reverseArray(int a[10])
{
int i,j,temp;
for(i=0,j=9;i<=4;i++,j--)
{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
printf("\nThe Reversed array:");
for(i=0;i<=9;i++)
{
printf("\n%d",a[i]);
}
}
