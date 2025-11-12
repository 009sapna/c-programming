#include<stdio.h>
int main(){
    //declearing value
    int a;
    int b;
    int c;
    int D;

     //taking input
     printf("enter a value of a\t");
     scanf("%d",&a);

     printf("enter a value of b\t");
     scanf("%d",&b);

     printf("enter a value of c\t");
     scanf("%d",&c);

       D=b^2-4*a*c;

        if(D>0){
            printf("Real and Distinct");
        }else if(D==0){
            printf("Root are real and equal");
        }else{
            printf("Roots are imaginary");
        }

        return 0;







}
