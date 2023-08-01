#include<stdio.h>
#include<conio.h>
int maxOfFour(int a,int b);
void main()
{
 clrscr();
 int num1,num2,num3,num4,a=0,b=0,max=0;
 printf("\nEnter 4 numbers ");
 scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
 a=maxOfFour(num1,num2);
 b=maxOfFour(num3,num4);
 max=maxOfFour(a,b);
 printf("The max is:%d",max);
 getch();
}
maxOfFour(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
