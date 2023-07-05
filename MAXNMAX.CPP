#include<stdio.h>
#include<conio.h>
void max(int arr[10]);
void nmax(int arr[10]);
void main()
{
clrscr();
int arr[10]={5,8,3,2,2,5,0,1,9,10};
max(arr);
nmax(arr);
getch();
}
void max(int arr[10])
{
int highest=0,i;
	for(i=0;i<=9;i++)
	{
		if(arr[i]>highest)
		{
			highest=arr[i];
		}
	}
	printf("Highest Element:%d",highest);
}
void nmax(int arr[10])
{
int i,highest=0,j,secondHigh=0;
	for(i=0;i<=9;i++)
	{
		if(arr[i]>highest)
		{
		secondHigh=highest;
		highest=arr[i];
		}
	}
printf("\nSecond highest element:%d",secondHigh);
}