//program to find factorial of any number
#include<stdio.h>
int main()
{
    int i,num,factorial=1;
    printf("number-");
    scanf("%d",&num);
    for(i=num;i>0;i=i-1)
    {
        factorial=factorial*i;
    }
    printf("%d",factorial);
    return 0;
}
