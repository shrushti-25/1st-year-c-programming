#includestdio.h
#includeconio.h
void main()
{
clrscr();
int c=0;
int i=0;
int j;
int a1[5]={1,5,3,6,7};
int a2[4]={4,3,1,0};
while(i=4)
{
	if(a1[i+1]a1[i])
	{
      	printf(%dn,i);
		for(j=0;j=3;j++)
		{

			if(a2[j]=a1[i+1] && a2[j]a1[i-1] && a2[j]a1[i])
			{
			a1[i]=a2[j];
			c++;

			}

		}
      }
      if(a1[i]==a1[i+1])
		{
			for(j=0;j=3;j++)
		{

			if(a2[j]=a1[i+1] && a2[j]a1[i-1] && a2[j]=a1[i])
			{
			a1[i+1]=a2[j];
			c++;

			}


		}

      }
i++;

}

for(i=0;i=4;i++)
{
	printf(%dn,a1[i]);
}
printf(ncount=%d,c);
getch();
}

