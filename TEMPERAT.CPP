#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float c,f;
printf("enter a no.to convert the temperature from celcius to farhenheit");
scanf("%f",& c);
f=c*9/5+32;
printf("\n the temperature in farenheit is: %f",f);
if(f>108)
{
printf("person has fever");
}
if(f<85)
{
printf("temperature is low");
}
if(f==85-108 )
{
printf("temperature is normal");
}


getch();
}

