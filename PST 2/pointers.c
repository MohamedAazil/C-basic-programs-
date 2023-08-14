#include <stdio.h>
int main()
{
    double a=10,b=20,c=30;
    double *ptr1 = &a;
    double *ptr2 = &b;
    double *ptr3;
    if (*ptr1>*ptr2)
    printf("\na is greater");
    else if (*ptr1<*ptr2)
    printf("\nb is greater");
    else 
    printf("\na and b are equal");

    printf("\n%d",ptr3);
    if(ptr3==NULL)
    printf("\n Null Pointer");
    return 0;
}