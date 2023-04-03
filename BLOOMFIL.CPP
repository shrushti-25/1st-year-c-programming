#include<stdio.h>
#include<conio.h>
#include<string.h>
struct bloom
{
char text[20];
int hash;
};
void main()
{
clrscr();
int a;
struct bloom s[5];
for(int i=0;i<=4;i++)
{
printf("\nEnter Data");
scanf("%s",&s[i].text);

a=strlen(s[i].text);
int code=a*10;
code=code%7;
printf("\nThe hash  code is:");
printf("\n\t%d",code);
}
getch();
}