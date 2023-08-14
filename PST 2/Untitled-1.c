#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    fptr = fopen("samplefile.txt","w");
    char file_data[100];
    fgets(file_data,100,fptr);
    printf("%s",file_data);
    return 0;
}