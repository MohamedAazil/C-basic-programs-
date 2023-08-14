. #include <stdio.h>
 
int main() {
    int rowsA, colsA, rowsB, colsB;
 
    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d %d", &rowsA, &colsA);
 
    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d %d", &rowsB, &colsB);
 
    if (colsA != rowsB) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }
 
    int matrixA[rowsA][colsA], matrixB[rowsB][colsB], result[rowsA][colsB];
 
    // Read matrix A
    printf("Enter the matrix A elements row by row:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }
 
    // Read matrix B
    printf("Enter the matrix B elements row by row:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }
 
    // Perform matrix multiplication
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
 
    // Display the resulting matrix
    printf("Resulting matrix:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}
