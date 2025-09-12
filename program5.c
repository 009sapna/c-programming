#include <stdio.h>
int main(){
int a;
int b;
int c;
printf("enter the side of triangle");
scanf("%d",&a);
printf("enter the side of triangle");
scanf("%d,&b");
printf("enter the side of triangle");
scanf("%d",&c);
if (a==b){
    if(b==c){
            printf("equilateral");
            }
}else if(a==b||b==c||c==a){
printf("isosceles");
 }else{
 printf("scalar");
  }
 }
