#include<stdio.h>
int main ()
{
     int eng[5],guj[5],sci[5],total[5],per[5];
   int i;
     char grade[5];

	for(int i=0; i<5; i++)
	{
		printf("\n enter %d student marks\n",i+1);1111
		
		printf("eng marks");
		scanf("%d",&eng[i]);
		printf("guj marks");
		scanf("%d",&guj[i]);
		printf("sci marks");
		scanf("%d",&sci[i]);
		
	total[i]=eng[i]+guj[i]+sci[i];
	per[i]=total[i]*100/300;
	}
	
	printf("\n");
	printf("No.\teng\tguj\tsci\ttotal\tper\tgrade\n");

	for(int i=0;i<5;i++)
	{
		printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n",i+1,eng[i],guj[i],sci[i],total[i],per[i],grade[i]);
	}
              if(per[i]<=35)
	{printf("fail");}
	else if(per[i]>=90)
	{printf("a");}
	else if (per[i]>=70)
	{printf("b");}
	else if(per[i]>=50)
	{printf("c");}
	else if(per[i]<=49)
	{printf("d");}
	else
{
printf("invalid");
}

	return 0;
}