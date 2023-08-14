// Program of area of a circle//
#include <stdio.h>
float main()
{
    float pi;
    float radius; 
    float area; 

    printf("Value of pi:\n");
    scanf("%d",&pi);
    printf("Value of Radius:\n");
    scanf("%d",&radius);

    area = radius*radius*pi;
    printf("%d",area);
    return 0;
}