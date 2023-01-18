#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    float total;

    ptr = (int *) malloc(3 * sizeof(int));

    printf("Enter the first number: ");
    scanf("%d", &ptr[0]);

    printf("Enter the second number: ");
    scanf("%d", &ptr[1]);

    printf("Enter the third number: ");
    scanf("%d", &ptr[2]);

    total = (ptr[0] + ptr[1] + ptr[2]) / 3.0;
    printf("The average of the three numbers is %f\n", total);

    free(ptr);

    return 0;
}
