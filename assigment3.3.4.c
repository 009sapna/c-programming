#include <stdio.h>
int main(){
    int customer_id;
    char customer_name[30];
    float bill_amount;
    int units;

    printf("Enter customer id: ");
    scanf("%d",&customer_id);
    printf("Enter customer name: ");
    scanf("%s",&customer_name);
    printf("Enter units consumed: ");
    scanf("%d",&units);

    if(units<=199){
        bill_amount=units*1.20;
    }else if(units>=200 && units<=399){
        bill_amount=units*1.50;
    }else if(units>=400 && units<=599){
        bill_amount=units*1.80;
    }else{
        bill_amount=units*2.00;
    }

    printf("customer id %d\n",customer_id);
    printf("customer name %s\n",customer_name);
    printf("units consumed %d\n",units);
    printf("total bill amount in Rs %f\n",bill_amount);
    return 0;
}





