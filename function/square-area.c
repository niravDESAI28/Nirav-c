#include <stdio.h>

void test(int length,int size)
{
    int area; 
    area = length*size;
    printf("area:  %d", area);
}

int main()
{
    int length = 5, size=6;
    test(5,6);
}
