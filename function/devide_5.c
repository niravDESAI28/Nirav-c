#include <stdio.h>

void test(int a)
{
   if(a%5==0)
   {
    printf("its possible");
   }
   else
   {
    printf("its not possible");
   }

}

int main()
{
    int a;
    printf("enter value of a:");
    scanf("%d",&a);
    test(a);
}
