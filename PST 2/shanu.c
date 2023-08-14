#include<stdio.h>
int main()
{
    int i,j,k,r1,r2,c1,c2,mat1[10][10],mat2[10][10],mat3[10][10];
    scanf("%d",&r1);
    scanf("%d",&c1);
    scanf("%d",&r2);
    scanf("%d",&c2);

    for (i=0;i<r1;i++){
        for (j=0;j<c1;j++){
            printf("(%d,%d)",i,j);
            scanf("%d %d",&mat1[i][j]);
        }
    }
    for (i=0;i<r1;i++){
        for (j=0;j<c1;j++){
            printf("(%d,%d)",i,j);
            scanf("%d %d",&mat2[i][j]);
        }
    }
    if (c1==r2)
    {
        for (i=0;i<r1;i++)
        {
            for (j=0;j<c1;j++)
            {
                mat3[i][j]=0;
                for (k=0;k<r2;k++)
                {
                    mat3[i][j]+=mat1[k][j]+mat2[i][k];
                }
            }
        }
    for (i=0;i<r1;i++){
        for (j=0;j<c1;j++){
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
    }
    else 
    {
        printf("Invalid");
    }
    }