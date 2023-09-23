#include<stdio.h>

int  main()
{
	char uper,lower;
	int a;
	printf("enter uper case chr :");
	scanf("%c",&uper);
	a=uper+32;
	printf(" chr in lower case: %c",a);


    printf("\n enter lower case :");
	scanf("%c",&lower);
	a=lower-32;
	printf("chr in uper case: %c",a);



}