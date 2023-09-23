#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,s=0,c;
	clrscr();
	printf("enter number");
	scanf("%d",&n);
	 c=n;
	while(n>0)
	{
		r=n%10;
	       s=r+(s*10);
		n=n/10;
	}
		if(c==s)
		{
			printf("pelitron") ;
		}
		else
		{
			printf("not pelitron");
		}
	getch();
}