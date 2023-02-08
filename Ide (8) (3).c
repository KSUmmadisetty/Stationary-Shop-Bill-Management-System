#include<stdio.h>
main()
{
     int quantity[10],i,bill_id,n,phone[12];
     char date[15],item_name[10][20],customer_name[20],address[80];
    float rate[10],bill;
    printf("\nEnter the Bill id=");
    scanf("%d",&bill_id);
    printf("\nEnter the Date=");
    scanf("%s",&date);
    printf("\nEnter the name of Customer=");
    scanf("%s",customer_name);
    printf("\nEnter the Address of customer=");
    scanf("%s",address);
    printf("\nEnter the Phone number of customer=");
    scanf("%d",&phone);
    printf("\n\nHow many purchase items=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n\nEnter the %d item name=",i+1);
        scanf("%s",&item_name[i]);
        printf("\nEnter the rate of %s item=",item_name[i]);
        scanf("%f",&rate[i]);
        printf("\nEnter the quantity of %s item=",item_name[i]);
        scanf("%d",&quantity[i]);
        bill=bill+(rate[i]*quantity[i]);
    }
    printf("\n\n************ WELL-COME ******************");
    printf("\n\nBill id is= %d",bill_id);
    printf("\n\nDate= %s",date);
    printf("\n\nCustomer name= %s",customer_name);
    printf("\n\nAddress= %s",address);
    printf("\n\nPhone number=%d",phone);
    printf("\n\ntotal number of items purchased=%d",n);
    printf("\n\n\nItem name\tRate\tQty\tAmount");
    for(i=0;i<n;i++)
    {
    printf("\n\n%s\t\t%.2f\t%d\t%.2f",item_name[i],rate[i],quantity[i],rate[i]*quantity[i]);
    }
    printf("\n\nTotal=  %.2f",bill);
    printf("\n\n**************~~Thank you~~***********************");
}
