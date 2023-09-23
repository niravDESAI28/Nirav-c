#include <stdio.h>

void odd(int i,int n)
{  
    for(i; i<=n; i+=2)
    {
    printf("%d,",i);
    }
   
}
int main()
{
    int i,n;
   printf("enter value of i:");
   scanf("%d", &i);
   printf("enter value of n:");
   scanf("%d", &n);
   
   odd(i,n);
  
}
