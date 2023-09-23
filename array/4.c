#include<stdio.h>
int main()
{
	int a[10],i,odd=0,even=0,total=0;
for(i=0;i<10;i++)
	{
	  printf("enter value of a[%d]",i);
	  scanf("%d",&a[i]);
	}
for(i=0;i<10;i++)
	{
	   if(a[i]%2==0)
		{
		 even=even+a[i];
		}
	   else
		{
		 odd=odd+a[i];
		}
	}
printf("\n even: %d\n",even);
printf("\n odd: %d\n",odd);
return 0;
}
