#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	clrscr();
	printf("enter value:");
	scanf("%d",&n);
		i=-n;
	while(i>=n)
		{
			printf("%d ",n);
			n++;
		}
	getch();
}