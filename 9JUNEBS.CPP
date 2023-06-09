#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void bs();
int array1[10]={45,55,65,75,85,95,105,115,125,135};
int key;
int start=0;
int end=9;
int mid=0;
void main()
{

printf("\n Enter the number to be searched");
scanf("%d",&key);
bs();
getch();
}
void bs()
{
if(start==end)
{
printf("Number not found");
}
else
{

mid=(start+end)/2;

	if(array1[mid]==key)
	{
	printf("\nNumber found at %d",mid);
	getch();
	exit(0);
	}
	else
	{
	if(array1[mid]<key)
	{
	start=mid+1;
	bs();
	}
	else
	{
	end=mid-1;
	bs();
	}
	}
}
}
