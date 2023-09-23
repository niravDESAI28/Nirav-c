#include<stdio.h>
int main ()
{ 
  int a[3][3],i,j,total;
for(i=0;i<3;i++)
	{
		for(j=0;j<3; j++)
			{
				printf("enter valueof a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
			}	
	}
	printf("\n");
for(i=0; i<3; i++)
	{
		for(j=0;j<3;j++)
			{
				printf("%d",a[i][j]);
			}
	printf("\n");
	}
for(i=0; i<3; i++)
	{
		for(j=0;j<3; j++)
			{
				if(i<j)
				{
				  total=total+a[i][j];
				}
			}
	}
	printf("%d",total);
	return 0;
}