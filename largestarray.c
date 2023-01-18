#include <stdio.h>
int main()
{

    int size, max, i;
    printf("Enter size");
    scanf("%d", &size);

    int arr[100];

    printf("Enter the number :");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("The largest is :%d", max);

    return 0;
}