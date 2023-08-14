//Program to find the sum of the digits of a number
#include <stdio.h>
int main()
{
    int num, dig, sum=0;
    printf("Enter the number\n");
    scanf("%d",&num);

    while (num>1)
    {
        dig = num%10;
        num = num/10;
        sum = dig+sum;
    }
    printf("Sum = %d",sum);
    return 0;
}