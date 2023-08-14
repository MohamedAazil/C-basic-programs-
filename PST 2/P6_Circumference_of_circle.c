//Program for circumference of circel//
#include <stdio.h>
#define Pi 3.14 
int main()
{
    int radius;
    int circumference;
    printf("ENTER RADIUS\n");
    scanf("%d",&radius);
    circumference = 2*Pi*radius;
    printf("Circumference = %d",circumference);
    return 0;
}