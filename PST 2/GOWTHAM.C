//Presentation
#include <stdio.h>
int main()
{
    int box[10];
    int i,sum=0;
    int total_weight=50;
    int removed_balls[10];
    int extra;
    int reball=0;
    printf("Enter the weight of balls:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&box[i]);
    }
    printf("Weight of 10 balls:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",box[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+box[i];
    }
    printf("SUM:%d",sum);
    if (sum>50)
    {
        extra=sum-50;
        printf("\nTo be Removed weight:%d",extra);
        for(i=0;i<10;i++)
        {
            if(box[i]<=extra)
            {
                removed_balls[reball++]=i;
                sum=sum-box[i];
                extra=extra-box[i];
                
            }
        }
        for (i = 0; i <reball; i++) 
        {
            printf("\nBall %d (weight: %d kg)\n", removed_balls[i] + 1,box[removed_balls[i]]);
        }
        printf("\n the Remaining Balls:%d",sum);
    } 
    else 
    {
        printf("The weight limit has not been exceeded. No balls need to be removed.\n");
    }
    return 0;

    
}