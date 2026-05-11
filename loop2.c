#include<stdio.h>
int main(){
    int a;
    printf("enter a value of a\t");
    scanf("%d",&a);

    while(a<=40){
        if(a%4==0){
            printf("table = %d\n",a);
        }
        a=a+4;
    }
      return 0;







}
