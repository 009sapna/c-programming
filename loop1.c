#include<stdio.h>
int main(){
    int a;
     printf("enter a value of a\n");
     scanf("%d",&a);
      while(a<=100){
            if(a%2==0){
        printf("even number = %d \n",a);

            }
        a=a+1;
    }
return 0;

}
