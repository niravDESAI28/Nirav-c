#include<stdio.h>
#include<conio.h>

void main()
{
	float i,n,a=0.5;
	clrscr();

	printf("enter value");
	scanf("%f",&n);
	printf("%f",a);

	for(i=0.5 ; i<=n ; i++)
	{
	   a+=i*1;
	   printf("\n%.1f",a);
	}
	getch();
}