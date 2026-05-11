#include <stdio.h>

int main() {
    int subject1, subject2, subject3, subject4, subject5;
    int aggregate_mark;
    float percentage;

    // Taking input mark of student
    printf("Enter mark for subject 1 (out of 100): ");
    scanf("%d", &subject1);

    printf("Enter mark for subject 2 (out of 100): ");
    scanf("%d", &subject2);

    printf("Enter mark for subject 3 (out of 100): ");
    scanf("%d", &subject3);

    printf("Enter mark for subject 4 (out of 100): ");
    scanf("%d", &subject4);

    printf("Enter mark for subject 5 (out of 100): ");
    scanf("%d", &subject5);

    // Calculate aggregate
    aggregate_mark = subject1 + subject2 + subject3 + subject4 + subject5;

    // Calculate percentage
    //percentage = aggregate_mark / 5.0;

    percentage=(aggregate_mark/500.0)*100.0;

    // Print results
    printf("\nAggregate Marks: %d\n", aggregate_mark);
    printf("Percentage: %f\n", percentage);

    return 0;
}
