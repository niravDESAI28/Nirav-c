#include<stdio.h>
#include<conio.h>

void main()
{
	int i=65,j=65;
	clrscr();

	while (i<=69)
	{
		j=65;
		while(j<=69)
		{
		printf("%c ",i);
		j++;
		}
		i++;
		printf("\n");
	}
	getch();
}