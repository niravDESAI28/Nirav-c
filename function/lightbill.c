#include <stdio.h>

void test(float unit)
{
    float amt, tax, final;

    if (unit <= 100)
    {
        tax = (unit * 0.60);
    }
    else if (unit <= 300)
    {
        tax = (60 + (unit - 100) * 0.80);
    }
    else if (unit >= 300)
    {
        tax = (60 + 160 + (unit - 300) * 0.90);
    }

    amt = 50 + tax;
    printf("%f ", amt);
    if (amt >= 300)
    {
        final = (amt + (amt * 0.15));
        printf("\n add.bill:%f", final);
    }
}

int main()
{
    int unit;

    printf("enter unit:");
    scanf("%d", &unit);

    test(unit);
}
