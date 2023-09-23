#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n,sum=0;
		printf("enter the value:");
		scanf("%d",&n);

	for(i=1 ; i<=n ; i++)
     {
	if(i%2!=0)
	{
		 sum=sum+i;
		 printf("%d ,",i);
	}
     }
		printf("sum is=%d\n",sum);

	return 0;
}