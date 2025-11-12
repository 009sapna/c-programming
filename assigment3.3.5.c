#include<stdio.h>
int main(){
    //declearing value
    char grade;

    //taking input
    printf("enter a grade(E,V,G,A,F)\n");
    scanf("%c",&grade);

    if(grade=='E'||grade=='e'){
        printf("exellent");

    }else if(grade=='V'||grade=='v'){
        printf("very good");

    }else if(grade=='G'||grade=='g'){
        printf("good");

    }else if(grade=='A'||grade=='a'){
        printf("Average");

    }else{
        printf("fail");
    }

}
