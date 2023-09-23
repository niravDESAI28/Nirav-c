#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	clrscr();
		printf("enter the value:");
		scanf("%d",&n);

	for(i=-n ; i<=n ; i++)
	{
	  printf("%d ,",i);
	}
	getch();
}