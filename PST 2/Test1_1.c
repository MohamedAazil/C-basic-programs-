/*
#include<stdio.h>
int sumarr(int a[],int n)
{
     int i,sum;
     for (i = 0;i<n;i++)
     {
          sum+=a[i];
     }
     printf("%d",sum);
}
int main()
{    
     int i,n; 
     printf("Enter No of elements\n");
     scanf("%d",&n);
     int arr[n];
     for (i=0;i<n;i++)
     {
          printf("Enter Value \n");
          scanf("%d",&arr[i]);
     }sumarr(arr[n],n);
     return 0;
}
*/
int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
 
int main() {
    int size;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
 
    int arr[size];
 
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
 
    int sum = calculateSum(arr[size], size);
 
    printf("Sum of the elements: %d\n", sum);
 
    return 0;
}

