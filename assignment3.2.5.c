#include<stdio.h>
int main(){
    //delaring value
    int angle_1;
    int angle_2;
    int angle_3;

    //taking input
    printf("enter angle 1 \t");
    scanf("%d",& angle_1);

    printf("enter angle 2\t");
    scanf("%d",& angle_2);

    printf("enter angle 3\t");
    scanf("%d",& angle_3);

    if(angle_1+angle_2+angle_3==180){
        printf("valid tringle");
    }else{
    printf("not valid triangle");
    }





}
