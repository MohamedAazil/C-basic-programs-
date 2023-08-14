//Program for matrix multiplication 
#include <stdio.h>
int main()
{
    int mat1[10][10],mat2[10][10],mat3[10][10],r1,c1,r2,c2,i,j,k;
    printf("Enter the row and column for matrix 1\n");
    scanf("%d",&r1);
    scanf("%d",&c1);
    printf("Enter the row and column for matrix 2\n");
    scanf("%d",&r2);
    scanf("%d",&c2);
    if (c1==r2)
    {
        for (i=0;i<r1;i++)
        {
            for (j=0;j<c1;j++)
            {
                printf("Enter the element(%d,%d)\n",i,j);
                scanf("%d",&mat1[i][j]);
            }
        }
        for (i=0;i<r2;i++)
        {
            for (j=0;j<c2;j++)
            {
                printf("Enter the element(%d,%d)\n",i,j);
                scanf("%d",&mat2[i][j]);
            }
        }
        
        for (i=0;i<r1;i++)
        {
            for (j=0;j<c2;j++)
            {   mat3[i][j]=0;
                for (k=0;k<c1;k++)
            {
                mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][j];
            }
        }
        }
    }
    for (i=0;i<r1;i++)
    {
        for (j=0;j<c1;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }for (i=0;i<r2;i++)
    {
        for (j=0;j<c2;j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }for (i=0;i<r1;i++)
    {
        for (j=0;j<c2;j++)
        {
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
}