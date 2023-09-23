#include <stdio.h>

void test(int a)
{
   if(a>0)
   {
    printf("its positive");
   }
   else
   {
    printf("its negative");
   }

}

int main()
{
    int a;
    printf("enter value of a:");
    scanf("%d",&a);
    test(a);
}
