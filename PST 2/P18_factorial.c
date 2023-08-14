//Program to find the factorial of a number
#include <stdio.h>
int main()
{
    int i=1,value,_factorial=1;
    printf("Enter the number\n");
    scanf("%d",&value);
    for(i = value;i>0;i=i-1)
    {
        _factorial*=i;
    }
    printf("%d",_factorial);
    return 0;
}