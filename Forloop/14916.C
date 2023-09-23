#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,a=0;
	clrscr();
	printf("enter value");
	scanf("%d",&n);

	for(i=1 ; i<=n ;i++)
	{
		a=i*i;
		printf("%d, ",a);
	}
	getch();
}

