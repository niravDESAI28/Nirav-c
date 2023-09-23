#include<stdio.h>
#include<conio.h>

void main()
{
	char i;
	clrscr();
		printf("enter the value:");
		scanf("%c",&i);


	for(i='a' ; i<='z'  ; ++i)
	 {
		printf("%c ,",i);
	 }
	getch();
}