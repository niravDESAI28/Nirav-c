#include <stdio.h>

void test(int inch)
{
    int total;
    total = inch * 12;
    printf("inch:  %d", total);
}

int main()
{
    int inch = 5;
    test(inch);
}
