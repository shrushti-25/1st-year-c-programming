#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
printf("enter three values");
scanf("%d%d%d",&a,&b,&c);
if(a==b && b==c)
{
printf("equilateral triangle\t");
}
else if(a==b||  b==c || c==a)
{
printf("isosceles\t");
}

else
{
printf("scalene");
}
getch();
}



