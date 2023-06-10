#include<stdio.h>
#include<conio.h>
int array1[10]={1,3,5,7,9,11,13,15,17,19};
int array2[10]={0,2,4,6,8,10,10,10,10,10};
void main()
{
int i=0,j=0,k=0,l=0,m=0;
clrscr();
	int array3[20]={0};
		     while(i <=9 && j<=9)
			{

				if(array1[i]<=array2[j])
				{
				array3[k]=array1[i];
				i++;
				}
				else
				{
				array3[k]=array2[j];
				j++;
				}
				k++;
			}

			while(i<=9 )
			 {
				array3[k]=array1[i];
				i++;k++;

			 }
			 while(j<=9)
			 {
				array3[k]=array2[j];
				j++;k++;

			 }





	for(k=0;k<=19;k++)
	{
	printf("\n%d",array3[k]);
	}

getch();
}