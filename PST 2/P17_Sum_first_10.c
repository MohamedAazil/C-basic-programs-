//Program to find the sum of the first ten natural numbers
#include <stdio.h>
int main()
{
    int i,sum,mul=1;
    for (i=1;i<=10;i+=1)
    {
        sum+=i;
        mul *= i;
    }
    printf("\nSum = %d\n",sum);
    printf("\nMul = %d\n",mul);
    return 0;
}