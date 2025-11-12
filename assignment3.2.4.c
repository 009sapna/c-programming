#include<stdio.h>
int main(){
    int a;
    int b;
    int c;

    printf("enter a number of a\t");
    scanf("%d",&a);

    printf("enter a number of b\t");
    scanf("%d",&b);

    printf("enter a number of c\t");
    scanf("%d",&c);


    if(a==b&&b==c&&c==a){
        printf("Equilateral triangle");

    }else if(a==b||b==c||c==a){
        printf("Isosceles triangle");

    }else{
        printf("Scalene");
    }

    return 0;


}
