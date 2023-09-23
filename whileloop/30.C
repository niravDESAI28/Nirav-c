#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,j;
	clrscr();
	while (i<=5)
	{
		j=1;
		while(j<=5)
		{
		printf("%d%d ",i,j);
		j++;
		}
		i++;
		printf("\n");
	}
	getch();
}