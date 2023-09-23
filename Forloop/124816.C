#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,sum=1;
	clrscr();
	printf("enter value");
	scanf("%d",&n);

	for(i=1 ; i<=n ;++i)
	{
		printf("\n%d",sum);
		sum=sum*2;
	}

	getch();
}