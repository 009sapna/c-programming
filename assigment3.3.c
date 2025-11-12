#include<stdio.h>
 int main(){
    //decalring value
    int x;
    int y;

    // take input coordinates
    printf("enter the coordinates x :");
    scanf("%d",&x);

    printf("enter the coordinates y:");
    scanf("%d",&y);

    //determine the quadrant or axis
    if(x==0&&y==0){
        printf("origine");

    }else if(x>=0&&y>=0){
        printf("quadrant I");

   } else if(x<0&&y>0){
    printf("quadrant II");

    }else if(x<=0&&y<=0){
    printf("quadrant III");

    }else{
     printf("quadrant IV");

     }





 }
