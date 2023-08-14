//Program to find the highest of three numbers
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter number 1\n");
    scanf("%d",&num1);
    printf("enter number 2\n");
    scanf("%d",&num2);
    printf("enter number 3\n");
    scanf("%d",&num3);

    if (num1>num2 && num1>num3)
    {
        printf("Num1 is greatest");
    }
    else if(num1>num2 && num1<num3)
    {
        printf("Num3 is greatest");
    }
    else
    {
        printf("Num2 is greatest");
    }
    return 0;
}