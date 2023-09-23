 #include<stdio.h>
int array[5][5];
int arr(int a)
{
    if(a==4)
    {
        return 0;
    }
    return arr(++a);
}
int arr2(int b)
{
    if(b==4)
    {
        return 0;
    }
    return arr(++b);
}
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
        printf("\nenter value a[%d][%d]: ",i,j);
        scanf("%d",&array[i][j]);
        }
    }

printf("\n");
 for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d",array[i][j]);
        }
        printf("\n");
    }
    arr (0);
    arr2(0);

}