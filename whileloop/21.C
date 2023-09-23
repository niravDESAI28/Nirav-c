#include<stdio.h>
#include<conio.h>

void main()
{
	int i=65,n;
	clrscr();
	scanf("%d",&n);
	while(i<=n)
		{
			{
				if(i%4!=1)
				printf("%c ",i+32);
				else
				printf("%c ",i);
			}
			i+=2;
		}
	getch();
}