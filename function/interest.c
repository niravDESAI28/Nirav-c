#include <stdio.h>

void test(int amt,int roi)
{
    int interest; 
    interest = amt*roi/100;
    printf("interest is:  %d", interest);
}

int main()
{
    int amt = 500, roi=2;
    test(500,2);
}
