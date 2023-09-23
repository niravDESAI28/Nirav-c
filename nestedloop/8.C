#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k=65;
	clrscr();

	for(i=1 ; i<=5 ; i++)
	{
		for(j=1 ; j<=5 ;j++,k++)
		{
			printf("%2c",k);

		}
			printf("\n");
	}
	getch();
}