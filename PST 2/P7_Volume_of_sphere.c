//Program for Volume of sphere //
#include <stdio.h>
#define Pi 3.14 
int main()
{
    int radius;
    int volume;
    printf("ENTER RADIUS\n");
    scanf("%d",&radius);
    volume = 4*Pi*radius*radius*radius/3;
    printf("Volume = %d",volume);
    return 0;
}