#include<stdio.h>
#include<conio.h>
int sumOfDigits(int num);
void main()
{
 clrscr();
 int num,add;
 printf("Enter a number");
 scanf("%d",&num);

 add=sumOfDigits(num);
printf("\nThe sum of the digits is:%d",add);
getch();
}
int sumOfDigits(int num)
{
  int sum=0,j=0;
	while(num>0)
	{
		j=num%10;
		sum=sum+j;
		num=num/10;
	}
  return sum;
}