# include <stdio.h>
int main()
{

    int n = 876;

    int reverse = 0, r;

    while (n > 0)
    {
        r = n % 10;
        reverse = reverse*10 + r;
        n = n / 10;
    }

    printf("The reverse of num is %d", reverse);
}
