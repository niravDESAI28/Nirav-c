#include <stdio.h>

void test(int a)
{
    int b;
    b = a * 80;
    printf("doller:  %d", b);
}

int main()
{
    int a = 5;
    test(a);
}
