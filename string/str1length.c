#include<stdio.h>
int main ()
{
	char str[40],i,length;
	
	printf("enter str value:");
	scanf("%[^\n]s",&str);

	
	for(i=0; str[i]!='\0'; i++)
	{
	length=i;
	printf("str[%d] value is:%c\n",i,str[i]);
	}
	printf("length is: %d",i);
}