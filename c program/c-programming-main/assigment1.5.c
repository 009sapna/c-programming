
#include <stdio.h>
int main(){
    //Declaring variable
    float total_selling_price;
    float total_profit;
    float total_cost_price;
    float cost_price_one_item;

    //Take input of total selling price
    printf("Enter the total selling price: ");
    scanf("%f",&total_selling_price);
    printf("Enter the total profit earned: ");
    scanf("%d",&total_profit);

    //Calculate total cost price
    total_cost_price=total_selling_price+total_profit;

    //Calculate cost price of item
    cost_price_one_item=total_cost_price/15;

    //Print result
    printf("%f\n",total_cost_price);
    printf("%f\n",cost_price_one_item);
}





