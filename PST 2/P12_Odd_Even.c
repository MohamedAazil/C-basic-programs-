//Program to find whether the given number is odd or even 
# include  <stdio.h>
int main()
{
    int number;
    printf("Enter The Number\n");
    scanf("%d",&number);
    if (!(number%2))
    {
        printf("EVEN");
    }
    else 
    {
        printf("ODD");
    }
    return 0;
}