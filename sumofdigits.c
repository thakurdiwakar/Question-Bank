#include <stdio.h>
int main()
{

    int n = 876;

    int sum = 0, r;

    while (n > 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }

    printf("The sum of num is %d", sum);
}