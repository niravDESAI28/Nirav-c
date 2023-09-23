#include<stdio.h>
struct bill
{
    int srno , rate,q,amount, billamt;
    float gst,dis,netbill;
    char product[50];

};
int main()
{
    struct bill b[2];
    int i;
    for(i=0;i<2;i++)
    {
        
        printf("enter srno:");
        scanf("%d",&b[i].srno);
        printf("enter product:");
        scanf("%s",&b[i].product);
        printf("enter rate:");
        scanf("%d",&b[i].rate);
        printf("enter quantity:");
        scanf("%d",&b[i].q);
        /*printf("enter amount:");
        scanf("%d",&b[i].amount);
        printf("enter dis:");
        scanf("%d",&b[i].dis);
        printf("enter billamt:");
        scanf("%d",&b[i].billamt);*/
    }
    printf("srno\tproduct\trate\tq\tamount\tdis\tbillamt\tgst\tnetbill");
    for(i=0;i<2;i++)
    {
    b[i].amount=b[i].rate*b[i].q;
    b[i].dis=b[i].amount*5/100;
    b[i].billamt=b[i].amount-b[i].dis;
    b[i].gst=b[i].billamt*18/100;
    b[i].netbill=b[i].billamt+b[i].gst;
    printf("\n%d\t%s\t%d\t%d\t%d\t%.2f\t%d\t%.2f\t%.2f",b[i].srno,b[i].product,b[i].rate,b[i].q,b[i].amount,b[i].dis,b[i].billamt,b[i].gst ,b[i].netbill );
    }
}