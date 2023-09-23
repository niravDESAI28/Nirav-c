#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,j,k;
	clrscr();
	      k=1;
	while (i<=5)
	{
		j=1;
		while(j<=5)
		{
		printf("%3d",k);
		j++,k++;
		}
		i++;
		printf("\n");
	}
	getch();
}