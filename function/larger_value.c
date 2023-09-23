#include <stdio.h>

void test(int a,int b, int c)
{
   if((a>b)&&(a>c))
   {
    printf("A IS LARGEST");
   }
   else if (b>c)
   {
    printf("B IS LARGEST");
   }
   else
   {
    printf("C IS LARGEST");
   }
}

int main()
{
    int a,b,c;
    
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of a:");
    scanf("%d",&b);
    printf("enter value of a:");
    scanf("%d",&c);
    test(a,b,c);
}
