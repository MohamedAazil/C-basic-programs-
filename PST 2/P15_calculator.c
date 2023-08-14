//Calculator Program Using Switch
#include <stdio.h>
int main()
{
    int num1,num2;
    char choice;
    printf("Enter Operation\n");
    scanf("%c",&choice);
    printf("Enter number 1\n");
    scanf("%d",&num1);
    printf("Enter number 2\n");
    scanf("%d",&num1);
    

    switch (choice)
    {
    case '+':
        printf("Num1 + Num2 = %d",num1+num2);
        break;
    
    default:
        break;
    }
    return 0;
}