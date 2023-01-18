#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *ptr;
    float avg;

    ptr = (int *)malloc(3 * sizeof(int));

       printf("Enter the first number: ");
    scanf("%d", &ptr[0]);

    printf("Enter the second number: ");
    scanf("%d", &ptr[1]);

    printf("Enter the third number: ");
    scanf("%d", &ptr[2]);

    avg = (ptr[0] + ptr[1] + ptr[2]) / 3.0;

    printf("\nThe average of anumber is :%f", avg);

    free(ptr);

    return 0;
}