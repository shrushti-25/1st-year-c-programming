#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int arr[10]={0,0,0,4,5,0,6,2,4,3};
 int  count=0,i=0,j=9;

// for(i=0;i<=9;i++)
// {
  //	scanf("%d",&arr[i]);
// }
 for(i=0;i<=9;i++)
 {
	if(arr[i]==0)
	{
	count++;
	}
 }

 i=0;
 j=0;
 while(j<=9)
 {
	if(arr[j]!=0)
	{
	arr[i]=arr[j];
	i++;
	}
	j++;
 }

printf("count is:%d",count);
for(j=(10-count);j<=9;j++)
{
arr[j]=0;
}

	for(j=0;j<=9;j++)
	{
		 printf("\n%d",arr[j]);
	}
 getch();
}