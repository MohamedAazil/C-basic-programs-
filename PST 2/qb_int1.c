/* Program to find the batsman with the best the strike rate 
#include <stdio.h>
int main()
{
    int n,i,j,strikerate[n],temp;
    printf("Enter the number of players\n");
    scanf("%d",&n);

    printf("Enter the strike rates of the players\n");

    for(i = 1; i < n ; i++)
    {
        scanf("%d",&strikerate[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;i++)
        {
            strikerate[]
        }
    }
}

//Program to find the no.of days in a month
#include <stdio.h>
int main()
{
    int num;
    printf("enter the nuber of the month\n");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        printf("January has 31 days");
        break;
    case 3:
        printf("March has 31 days");
        break;
    case 5:
        printf("May has 31 days");
        break;
    case 7:
        printf("July has 31 days");
        break;
    case 8:
        printf("August has 31 days");
        break;
    case 10:
        printf("October has 31 days");
        break;
    case 12:
        printf("December has 31 days");
        break;
    case 2:
        printf("February has 28 days");
        printf("\nIn leap years, february has 29 days");
        break;
    case 4:
        printf("April has 30 days");
        break;
    case 6:
        printf("June has 30 days");
        break;
    case 9:
        printf("Spetember has 30 days");
        break;
    case 11:
        printf("November has 30 days");
        break;
    
    
    default:
        printf("Invalid month number");
        break;
    }
}
#include <stdio.h>
int main()
{
    int arr[5];
    int i;
    printf("Enter the elements for array :\n");
    for(i=0;i<5;i++)
        {
            scanf("%d",&arr[i]);
        }
    arr[3]=10;
    printf("The updated elements are :\n");
    for(i=0;i<5;i++)
        {
            printf("%d\n",arr[i]);
        }
}*/
#include <stdio.h>
int main()
{
    int n,i,arr[n];
    printf("Enter the no of elements :\n");
    scanf("%d",&n);
    printf("Enter the elements \n");
    for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("The recently added elements :\n");
    for(i=n-1;i>=0;i--)
        {
            printf("%d\n",&arr[i]);
        }
    return 0;
}