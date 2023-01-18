#include <stdio.h>
int main()
{

    int size, max1,max2, i;
    printf("Enter size");
    scanf("%d", &size);

    int arr[100];

    printf("Enter the number :");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    max1 = arr[0];
    max2 = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1=arr[i];
        }
        else if (arr[i]>max2 && arr[i]<max1)
        {
            max2=arr[i];
        }
        
    }

    printf("The second largest element is :%d", max2);

    return 0;
}