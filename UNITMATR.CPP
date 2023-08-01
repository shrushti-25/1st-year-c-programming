#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 clrscr();
 int a[3][3];
 int i,j,count=0;
 printf("\nEnter values to the matrix:\n");
 for(i=0;i<=2;i++)
 {
	for(j=0;j<=2;j++)
	{
		scanf("%d",&a[i][j]);
	}
 }
 printf("\nThe matrix is:\n");
 for(i=0;i<=2;i++)
 {
	for(j=0;j<=2;j++)
	{
		printf("%d\t",a[i][j]);
	}
	printf("\n");
 }
 for(i=0;i<=2;i++)
 {
	for(j=0;j<=2;j++)
	{
		if(i==j)
		{
			if(a[i][j]!=1)
			{
				count++;
			}
		}
		else if(a[i][j]!=0 && i!=j)
		{
			printf("\nThe matrix is not unit matrix");
			exit(0);
		}
	}
 }
 if(count==3)
 {
	printf("\nThe matrix is a unit matrix");
 }
 getch();
}

