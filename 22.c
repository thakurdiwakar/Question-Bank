#include <stdio.h>

int main() {
    int A, X, Y;
    printf("Enter Rahul's current age: ");
    scanf("%d", &A);
    printf("Enter the minimum age limit: ");
    scanf("%d", &X);
    printf("Enter the maximum age limit: ");
    scanf("%d", &Y);

    if (A >= X && A < Y) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
