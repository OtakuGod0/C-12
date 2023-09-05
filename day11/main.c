#include <stdio.h>

int m, n;
int* mult(int [m][n], int [m][n]);

int main(){
    int m, n;

    printf("Enter the number of rows (m): ");
    scanf("%d", &m);

    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int A[m][n]; // Declare the first 2D array A
    int B[m][n]; // Declare the second 2D array B

    // Input values for the first 2D array A
    printf("Enter values for array A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input values for the second 2D array B
    printf("Enter values for array B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    
    int *multV = mult(A, B);

}
int* mult(int A[m][n],int B[m][n]){
    int *multR = (int*)malloc(m * n * sizeof(int));
    int i, j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            multR[i][j] = A[i][j] * B[j][i];
        }
    }
    return multR;
}