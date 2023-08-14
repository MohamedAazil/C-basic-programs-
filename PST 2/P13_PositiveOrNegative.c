//Program TO Check Whether The given Number Is Postitve Negative Or Zero
#include <stdio.h>
int main()
{
    int number ;
    printf("Enter the Number\n");
    scanf("%d",&number);
    if (number>0)
    {
        printf("Positive");
    }
    else if(number<0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }
    return 0;
}