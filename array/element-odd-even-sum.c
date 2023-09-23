#include<stdio.h>
int main()
{
  int arr[3][3],i,j,total;

  

 for(int i=0;i<3;i++)
	{
	  for(int j=0;j<3;j++)
		{
		 printf("enter value of arr[%d][%d]",i,j);
		 scanf("%d",&arr[i][j]);	
		}
	}
	printf("\n");	
for(int i=0;i<3;i++)
	{
	  for(int j=0;j<3;j++)
		{
		 printf("%d",arr[i][j]);
		}
	printf("\n");
	}
 return 0;
}