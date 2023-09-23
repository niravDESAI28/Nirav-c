#include <stdio.h>

void test(int height,int base,int root)
{
    int area; 
    area = height * base / root;
    printf("area:  %d", area);
}

int main()
{
    int height = 5, base=6, root=2;
    test(5,6,2);
}
