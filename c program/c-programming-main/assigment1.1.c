#include <stdio.h>
int main(){
    //Declaring variable
    float basic_salary;
    float dearness_allowance;
    float house_rent_allowance;
    float gross_salary;

    //Taking input in basic salary
    printf("Enter Ramesh's basic salary");
    scanf("%f",&basic_salary);

    //calculate dearness allowance
    dearness_allowance=40/100*basic_salary;

    // calculate house rent allowance
    house_rent_allowance=20/100*basic_salary;

    //calculate gross salary
    gross_salary=basic_salary+dearness_allowance+house_rent_allowance;

    //print the gross salary
    printf("%f\n",gross_salary);



}
