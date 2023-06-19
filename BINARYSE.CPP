#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void bs();
int start=0;
int end=9;
int input[10];
int mid=0,key;
void main()
{
 clrscr();
 int i,j,temp=0;
 printf("Enter 10 elements to the array\n");
 for(i=0;i<=9;i++)
 {
	scanf("%d",&input[i]);
 }

 for(i=0;i<=9;i++)
 {
	for(j=0;j<=8;j++)
	{
		if(input[j]>input[j+1])
		{
			temp=input[j];
			input[j]=input[j+1];
			input[j+1]=temp;
		}
	}
 }
  printf("\nThe sorted array is:");
 for(i=0;i<=9;i++)
 {
	printf("\n%d",input[i]);
 }
 printf("\n");
 printf("\nEnter the number to be found");
 scanf("%d",&key);
 bs();
 getch();
}
void bs()
{
	if(start==end)
	{
		printf("\nNumber not found");
	}
	else
	{
		mid=(start+end)/2;
		if(input[mid]==key)
		{
			printf("Number found at%d",mid);

			getch();
			exit(0);
		}
		else
		{
			if(input[mid]<key)
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