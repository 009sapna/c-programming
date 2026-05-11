#include <stdio.h>
int main(){
    //Declaring variable
    int marks_in_mathematics;
    int marks_in_physics;
    int marks_in_chemistry;
    int total_marks_three_subject;
    int total_marks_mathematics_physics;

    //Take input as marks os subjects
    printf("Enter marks of mathematics: ");
    scanf("%d",&marks_in_mathematics);
    printf("Enter marks of physics: ");
    scanf("%d",&marks_in_physics);
    printf("Enter marks of chemistry: ");
    scanf("%d",&marks_in_chemistry);

    //Calculate marks
    total_marks_three_subject=marks_in_mathematics+marks_in_physics+marks_in_chemistry;
    total_marks_mathematics_physics=marks_in_mathematics+marks_in_physics;

    //Check eligibility criteria
    if(marks_in_mathematics>=65 && marks_in_physics>=55 && marks_in_chemistry>=50 &&
        (total_marks_three_subject>=190 || total_marks_mathematics_physics>=140)){
            printf("candidate is eligible.\n");

    }else{
        printf("candidate is not eligible.\n");
    }
}
