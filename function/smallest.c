#include <stdio.h>

void test(int a,int b)
{
   if(a<b)
   {
    printf("a is small");
   }
   else
   {
    printf("b is small");
   }

}

int main()
{
    int a, b;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);

    test(a,b);
}
