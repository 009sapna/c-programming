#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *p, *q, *r;

    printf("Enter the size of an array: ");
    scanf("%d", &n);


    p = (int*) malloc(n * sizeof(int));
    q = (int*) malloc(n * sizeof(int));
    r = (int*) malloc(n * sizeof(int));



    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &q[i]);
    }

    // Add arrays
    for (i = 0; i < n; i++) {
        r[i] = p[i] + q[i];
    }

    printf("Result = ");
    for (i = 0; i < n; i++) {
        printf("%d ", r[i]);
    }

    // Free allocated memory
    free(p);
    free(q);
    free(r);

    return 0;
}
