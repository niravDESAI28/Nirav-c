#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n,a=0,b=1,c;
	clrscr();
	printf("enter value:");
	scanf("%d",&n);
	c=a+b;
	printf("%d ",c);
	while(i<=n)
		{
			{
				c=a+b;
				printf("%d ",c);
				a=b;
				b=c;
			}

			i++;
		}

	getch();
}