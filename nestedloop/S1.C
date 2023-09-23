#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k;
	clrscr();

	for(i=4 ; i>=1 ; i--)
	{
		for(j=1 ; j<=i ; j++)
		{
			printf("00");
		}
		for(k=1 ; k<=j ; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}