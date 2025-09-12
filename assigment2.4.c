#include <stdio.h>
int main(){
    //declaring variables
    int total_minutes;
    int hours;
    int minutes;

    //talking input
    printf("enter the total numbers in minutes: \t");
    scanf("%d",&total_minutes);

    //applying formula
    hours=total_minutes/60;
    minutes=total_minutes%60;

    //program logic
    printf("hours");
    printf("%d",hours);
    printf("\nmintuse=");
    printf("%d",minutes);







}
