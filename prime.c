#include<stdio.h>
int main(){



    int i, m,n,flag=0;

    printf("Enter the number :",n);
    scanf("%d",&n);
    m=n/2;
    for ( i = 2; i < m; i++)
    {
       if (n%i==0)
       {
        printf("Not prime");
        flag=1;
        break;
       }
       
    }
    if (n<=0)
    {
       printf("Not prime");
       flag=1;
    }
    if (flag==0)
    {
       printf("Prime");
    }
    
    
    return 0;

}