# include <stdio.h>
int main()
{

    int n ,temp;

    printf("Enter the number :");
    scanf("%d",&n);
    temp=n;
    int reverse = 0, r;

    while (n > 0)
    {
        r = n % 10;
        reverse = reverse*10 + r;
        n = n / 10;
    }

    printf("The reverse of num is %d", reverse);


   if (temp==reverse)
   {
    printf("\nThe number is palindrome");
   }

   else
   {
    printf("\nThe number is not palindrome");
   }
   


    return 0;
}
