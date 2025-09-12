#include <stdio.h>
int main(){
int m;
printf("enter a number");
scanf("%d",&m);
if (m>90){
    printf("Grade A");
}
if (m>=80){
    printf("Grade B");
}
if (m>70){
    printf("Grade C");
}
if(m>60){
    printf("Grade D");
}
if (m<60){
    printf("Grade E");
}
}
