#include<stdio.h>
int main ()
{
   int a[3][3],i,j,total=0;
for(int i=0;i<3;i++)
  {
  for(int j=0;j<3;j++)
	{
	  printf("enter value of a[%d][%d]:",i,j);
	  scanf("%d",&a[i][j]);
	}
  }
	printf("\n");
for(int i=0;i<3;i++)
  {
	for(int j=0;j<3;j++)
	   {
		printf("%d ",a[i][j]);
   	   }
	printf("\n"); 
 }
for(i=0;i<3; i++)
	{
	    for(j=0; j<3; j++)	
		{
		  if(i==j)
			{
 		  	 total=total+a[i][j];
	   		}
		
		}
	}
	printf("%d",total);

	
   return 0;
}		