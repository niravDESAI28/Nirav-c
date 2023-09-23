#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,sum=0;
	clrscr();
	i=1;
	while(i<=10)
		{        sum=sum+i;
			printf("%d ",i);
			i++;
		}
			printf("\ntotal%d",sum);
	getch();
}