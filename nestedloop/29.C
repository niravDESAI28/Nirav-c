#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k;
	clrscr();

	for(i=1 ; i<=5 ; i++)
	{
		for(j=1 ; j<=i ; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=1 ; i<=5 ; i++)
	{
		for(j=1 ; j<=i ; j++)
		{
			printf("  "); //double space
		}
		for(k=4 ; k>=i ; k--)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}