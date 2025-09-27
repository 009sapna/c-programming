#include <stdio.h>
int main(){
int a;
int b;
int c;
printf("enter the sides of tiangle");
scanf("%d,",&a);
printf("enter the side of tiangle");
scanf("%d",&b);
printf("enter the side of triangle");
scanf("%d",&c);
if(a==b&&b==c){
    printf("equilateral");
}else if(a==b||b==c||a==c){
printf("isosceles");
 }else{
 printf("scalar");
  } }
