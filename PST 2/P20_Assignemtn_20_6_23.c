//Program to display the multiplaction table of a given number
#include <stdio.h>
int main()
{
    int og_num,num,dig,rev=0;

    printf("enter the number\n");
    scanf("%d",&num);
    og_num=num;
    while (num>0)
    {
        dig = num%10;
        rev = rev+dig;
        num = num/10;
    }
    printf("sum = %d",rev);
    return 0; 
}