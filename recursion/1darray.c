#include <stdio.h>
int array[22];
int test(int a)
{
    printf("%d ",array[a]);
    if(a==19)
    {
        return 0;
    }
    return test(++a);
}
int main ()
{
    for(int i=0;i<20;i++)
    {
        array[i]=i+80;
    }
    test (0);
}

