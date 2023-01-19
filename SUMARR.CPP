#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int arr1[5];
int arr2[5];
int sumarr[5],i;
printf("\nProgram to print sum of all indexes of an array");
printf("\nenter 5 inputs for arr 1");
for(i=0;i<=4;i++)
{
scanf("%d",&arr1[i]);
}
printf("\nenter inputs for arr 2");
for(i=0;i<=4;i++)
{
scanf("%d",&arr2[i]);
}
for(i=0;i<=4;i++)
{
sumarr[i]=arr1[i]+arr2[i];
}
for(i=0;i<=4;i++)
{
printf("\n%d",sumarr[i]);

}

getch();

}

