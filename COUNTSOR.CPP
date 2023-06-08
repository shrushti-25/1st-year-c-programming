#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
int input[10];
printf("Countsort program");
int output[20]={0};
printf("Enter 10 values to the array");
for(i=0;i<=9;i++)
{
scanf("%d",&input[i]);
}
//printf("Enter the the max value of the array");
//scanf("%d",&max);
for(i=0;i<=9;i++)
{
output[input[i]]++;
}
printf("\nThe sorted array is:\n");
for(i=0;i<=19;i++)
{
for(j=0;j<output[i];j++)
{
printf("%d\n",i);
}
}
getch();
}