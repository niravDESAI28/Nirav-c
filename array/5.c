#include<stdio.h>
int main()
{
	int a[10],i,total=0;
for(i=0;i<10;i++)
	{
	  printf("enter value of a[%d]",i);
	  scanf("%d",&a[i]);
	}
for(i=0;i<10;i++)
	{
	  total+=a[i]; 	
	}
printf("\n sum: %d\n",total);

return 0;
}
