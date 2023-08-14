/*Write a C function .
i) to check whether the given number is prime or not .*/
#include<stdio.h>
int prime(int num)
{
    for(int i=2;i<(num/2);i++)
    {
        if(num%i==0)
        {
            return 0;
            break ;
        }
    }
    return 1;
}
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int pr1;
    pr1=prime(num);
    if(pr1==1)
    {
        printf("the given number is prime number");
    }
    else
    {
        printf("the given number is not prime number");
    }
    return 0;
}