#include <stdio.h>

void tax(float amount)
{
    float  tax=0, total=0;

    if (amount <=2500)
    {
        total = amount * 0.00;
    }
     else if (amount <= 5000)
    {
        total = (amount-2500)* 0.10;
    }
    else if (amount <= 10000)
    {
        total = (250+ (amount-5000)* 0.20);
    }
    else if (amount >10000)
    {
        total = (250+1000+ (amount-10000)* 0.30);
    }


    printf("tax:%f ", total);
    
}

int main()
{
    float amount;

    printf("enter amount:");
    scanf("%f", &amount);

    tax(amount);
}
