#include<stdio.h>
int main(){
    //decalring value
    int a;
    int b;
    int c;
    int largest;

    //taking input
    printf("enter the value of a\t");
    scanf("%d",&a);

    printf("enter the value of b\t");
    scanf("%d",&b);

    printf("enter the value of c\t");
    scanf("%d",&c);

    if(a>=b){
        if(a>=c){
            largest=a;
        }else{
            largest=c;
        }
    }else{
        if(b>=c){
            largest=b;
        }else{
            largest=c;
        }
    }
    printf("Largest Number= ");
    printf("%d",largest);



}
