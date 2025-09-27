#include <stdio.h>
int main()
{

    //Declaring value
    int kilometers;
    float meters;
    float feets;
    float inches;
    float centimeter;
    float foots;


    //Taking input distance  in kilometer
    printf("enter a distance in a kilometer");
    scanf("%d",&kilometers);

    //calculate meter
    meters = kilometers*1000;

    //calculate feets
    feets = meters*3.28084;

    //calculate inches
    inches=foots*12;

    //calculate centimeters
    centimeter=kilometers*100000;

    //print result
    printf("\nmeter : %f",meters);
    printf("\nfeets :%f",feets);
    printf("\ninches:%f",inches);
    printf("\ncentimeter:%f",centimeter);

return 0

}
