#include<stdio.h>
int main(){
    int roll_number;
    int marks1;
    int marks2;
    int marks3;
    int total_marks;
    char name[30];
    float percentage;
    char division[30];

    printf("Enter student's roll number: ");
    scanf("%d",&roll_number);
    printf("Enter student's name: ");
    scanf("%s",&name);
    printf("Enter marks of first subject 1: ");
    scanf("%d",&marks1);
    printf("Enter marks of subject 2: ");
    scanf("%d",&marks2);
    printf("Enter marks of third subject 3: ");
    scanf("%d",&marks3);

    total_marks=marks1+marks2+marks3;
    printf("total marks %d\n",total_marks);
    percentage=total_marks/300.00*100.00;
    printf("percentage %f\n",percentage);

    if(percentage>=60){
        printf("first division %s\n",percentage);
    }else if(percentage>=40){
        printf("second division %s\n",percentage);
    }else{
        printf("fail %s\n",percentage);
    }


}




