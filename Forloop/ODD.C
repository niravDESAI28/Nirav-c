#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n;
	
		printf("enter the odd value:");
		scanf("%d",&n);
	     //	printf("all odd num:,n");

	for(i=1 ; i<=n ; i++)
       {
	if(i%2!=0)
	{
	  printf("%d ,",i);
	}
       }
	return 0;
}