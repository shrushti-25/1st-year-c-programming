#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    int i,num,flag=0;
    int a[10]={12,22,24,32,34,38,39,40,42,48};
    scanf("%d",&num);
    for(i=0;i<=9;i++)
       {

	 if(a[i]==num)
	 {
	 printf("%d number found at\n %d",a[i],i);
	 flag=1;
	 }

      }
	 if(flag==0)
	 printf("number not found");


       getch();
}



