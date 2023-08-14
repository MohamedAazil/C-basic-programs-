#include<stdio.h>
int main()
{
    int temp, min, i, j, a[]= {3,1,2,7,4,5,9,8,6};
    int len = sizeof(a)/sizeof(a[0]);

    for (i = 0; i<len;i++)
    {
        for (j=i+1;j<len;j++)
        {
            min = i;
            if (a[j]<a[min])
            {
                temp = a[j];
                a[j] = a[min] ;
                a[min] = temp;
            }
        }
    }
    printf("Sorted Array:");
    for (i = 0; i<len;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}