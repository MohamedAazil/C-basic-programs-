//Program to find area of triangle//
#include <stdio.h>
int main()
{
    int base,area,height;
    printf("Enter base\n");
    scanf("%d",&base);
    printf("Enter height\n");
    scanf("%d",&height);
    area = base*height/2;
    printf("Area=%d",area);
    return 0;
}