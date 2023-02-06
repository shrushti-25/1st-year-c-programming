#include<conio.h>
#include<stdio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter three no.s");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("%d",a);
}
if(b>a && b>c)
 {
printf("%d",b);
}
//(c>a && c>b)
else
printf("%d",c);

getch();
}

