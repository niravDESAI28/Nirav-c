#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k=65;
	clrscr();

	for(i=1 ; i<=5 ; i++)
	{
		for(j=1 ; j<=i ; j++,k++)
		{
			if(i%2==0)
			{
			printf("%3c",k+32);
			}

			else
			{
			printf("%3c",k);
		}       }
		printf("\n");
	}
	getch();
}