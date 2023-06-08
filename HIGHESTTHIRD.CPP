#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i;
	int first,second,third;
	int a[10];
	printf("Enter 10 values to find the three highest values");
	for(i=0;i<=9;i++)
		{
		scanf("%d",&a[i]);
		}
	for(i=0;i<=9;i++)
		{
		if(a[i]>a[i+1])
			{
			first=a[i];
			}

		else if(a[i]>a[i+1] && a[i]<a[i+2] || a[i]<a[i+1] && a[i]>a[i+2])
			{
			second=a[i];
			}

		else
			{
			third=a[i];
			}
	}
	printf("First highest:%d\nSecond Highest:%d\nThird highest:%d",first,second,third);
getch();
}