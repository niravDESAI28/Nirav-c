#include <stdio.h>
int main ()
{
 int arr[3][3],i,j;
for (int i=0; i<3; i++)
	{
	for(int j=0; j<3; j++)
	{
	  printf("valueof arr[%d][%d]",i,j);
	  scanf("%d",&arr[i][j]);
	}
	}
	printf("\n");

for(int i=0; i<3; i++)
	{
	for(int j=0; j<3; j++)
	  {
	   printf("%d",arr[i][j]);
	  }
	printf("\n");
	}
	
   return 0;
}