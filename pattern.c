#include <stdio.h>

int main() {
    int n = 4; // number of rows to generate

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            int value = (j+i) % 2;
            printf("%d ", value);
        }
        printf("\n");
    }

    return 0;
}
