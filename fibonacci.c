#include<stdio.h>
int main(){

int i,first=0,second=1,temp,third,range;


printf("Enter the  range :");

scanf("%d",&range);

printf("%d",first);
printf("%d",second);

for (i = 2; i < range; i++)
{
   third=first+second;
   printf("%d",third);
     first=second;
     second=third;
   
}





return 0;
}