#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int num[5];
 int target,i;
 printf("\n Enter 5 inputs to calculate two the sum of two numbers\n that equals to the target");
 printf("\n The numbers you input should not be same");
 for(i=0;i<=4;i++)
 {
	scanf("%d",&num[i]);
 }
 printf("\nEnter Target");
 scanf("%d",&target);

 for(i=0;i<=4;i++)
 {
	num[i]+num[i+1];
	if(num[i]+num[i+1]==target)
	{
	printf("\nNumber is:%d,%d\tat index:%d,%d",num[i],num[i+1],i,i+1);
	}

 }
getch();
}