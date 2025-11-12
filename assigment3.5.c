#include<stdio.h>
int main(){
    //delaring value
    int maths;
    int physics;
    int chemistry;
    int total_marks;
    int Maths_physics_chemistry;

    //taking input value
    printf("enter marks of maths\t");
    scanf("%d",&maths);

    printf("enter marks of physics\t");
    scanf("%d",&physics);

    printf("enter marks of chemisty\t");
    scanf("%d",&chemistry);

    //calculate the marks
    if(total_marks=maths+physics+chemistry){
        printf("Total_marks=");
        printf("%d",total_marks);
    }
    if (Maths_physics_chemistry=maths+physics+chemistry){
        printf("maths physics Total =");
        scanf("%d",total_marks);
    }
    if(Maths_physics_chemistry=maths+physics+chemistry){
        printf("maths physics total=");
        printf("%d",total_marks);
    }
    if(maths>=65&&physics>=55&&chemistry>=50){
        if(total_marks>=190||maths>=140){
            printf("candidate eligible");
        }
    }


}
