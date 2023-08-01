#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[4][2],b[4][2],sum[4][2],subtract[4][2],i,j;
 printf("Enter 1st matrix:");
 for(i=0;i<=3;i++)
 {
	for(j=0;j<=1;j++)
	{
		scanf("%d",&a[i][j]);
	}
 }
 printf("\nEnter the second matrix:");
 for(i=0;i<=3;i++)
 {
	for(j=0;j<=1;j++)
	{
		scanf("%d",&b[i][j]);
	}
 }
 printf("\nMatrix 1 is:\n");
 for(i=0;i<=3;i++)
 {
	for(j=0;j<=1;j++)
	{
		printf("%d\t",a[i][j]);
	}
	printf("\n");
 }
 printf("\nMatrix 2 is:\n");
 for(i=0;i<=3;i++)
 {
	for(j=0;j<=1;j++)
	{
		printf("%d\t",b[i][j]);
	}
	printf("\n");
 }
 for(i=0;i<=3;i++)
 {
	for(j=0;j<=1;j++)
	{
		sum[i][j]=a[i][j]+b[i][j];
		subtract[i][j]=a[i][j]-b[i][j];
	}
 }
 printf("\nThe sum matrix is:\n");
 for(i=0;i<=3;i++)
 {
	for(j=0;j<=1;j++)
	{
	printf("%d\t",sum[i][j]);
	}
	printf("\n");
 }
 printf("\nThe subtraction matrix is:\n");
 for(i=0;i<=3;i++)
 {
	for(j=0;j<=1;j++)
	{
		printf("%d\t",subtract[i][j]);
	}
	printf("\n");
 }
 getch();
}
