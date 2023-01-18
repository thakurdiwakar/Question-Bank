#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ",(i+ j) % 2==0);
        }
        printf("\n");
    }

    return 0;
}
