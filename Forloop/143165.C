#include<stdio.h>
#include<conio.h>

void main () 
{
	int i,n,sum=0;
	clrscr();
	printf("enter value");
	scanf("%d",&n);

	for(i=1 ; i<=n ;++i)
	{
	    {
		if(i%2!=0)
		{
			printf("\n%d",i);
		}
		else
		{
			printf ("\n%d",i*i);
		}
	    }
	}
	getch();
}