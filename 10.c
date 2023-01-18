#include <stdio.h>

int main() {
    int marks1, marks2, marks3;
    float total;

    printf("Enter marks for subject 1: ");
    scanf("%d", &marks1);

    printf("Enter marks for subject 2: ");
    scanf("%d", &marks2);

    printf("Enter marks for subject 3: ");
    scanf("%d", &marks3);

    total = (marks1 + marks2 + marks3) / 3.0;
    if (marks1 < 33 || marks2 < 33 || marks3 < 33) {
        printf("Failed\n");
    } else if (total >= 40) {
        printf("Passed\n");
    } else {
        printf("Failed\n");
    }

    return 0;
}
