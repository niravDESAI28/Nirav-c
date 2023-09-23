#include <stdio.h>

int getsub()
{
    int guj, eng, maths, total;

    printf("enter guj is: ");
    scanf("%d",&guj);
    printf("enter eng is: ");
    scanf("%d",&eng);
    printf("enter maths is: ");
    scanf("%d",&maths);

    total= guj + eng + maths;
    return total;
} 

int calcul(int totalmarks)
{
    int percent = (totalmarks*100)/300;
    printf ("totalmarks: %d\n",totalmarks);
    printf("percent: %d\n",percent);

    return percent;
}

int main()
{
    int gettotal = getsub();
    int getpercent = calcul(gettotal);
    return 0;

}
