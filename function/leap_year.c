#include <stdio.h>

void test(int year)
{
   if(year%4==0)
   {
    printf("its leap year");
   }
   else
   {
    printf("its not leap year");
   }

}

int main()
{
    int year;
    printf("enter value of a:");
    scanf("%d",&year);
    test(year);
}
