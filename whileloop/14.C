#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n,a=0;
	clrscr();
	printf("enter value:");
	scanf("%d",&n);
	while(i<=n)
		{
			a=i*i;
			printf("%d ",a);
			i++;
		}

	getch();
}