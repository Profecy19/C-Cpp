#include <stdio.h>
#include <stdlib.h> 

int main() {
    int m1r, m1c, m2r, m2c;
    printf("Enter number of Rows of 1st Matrix (A): ");
    if (scanf("%d", &m1r) != 1) return 1;
    printf("Enter number of Columns of 1st Matrix (A): ");
    if (scanf("%d", &m1c) != 1) return 1;
    printf("Enter number of Rows of 2nd Matrix (B): ");
    if (scanf("%d", &m2r) != 1) return 1;
    printf("Enter number of Columns of 2nd Matrix (B): ");
    if (scanf("%d", &m2c) != 1) return 1;
    int mata[m1r][m1c];
    int matb[m2r][m2c];
    int sum[m1r][m2c];
    if (m1c != m2r) {
        printf("\nError: Matrix multiplication is not possible.\n");
        printf("Columns of Matrix A (%d) must equal Rows of Matrix B (%d).\n", m1c, m2r);
        exit(1); 
    }
    printf("\n-- Enter elements for Matrix A (%dx%d) --\n", m1r, m1c);
    
    for (int i = 0; i < m1r; i++) {
        for (int j = 0; j < m1c; j++) {
            printf("Enter A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mata[i][j]);
        }
    }
    printf("\n-- Enter elements for Matrix B (%dx%d) --\n", m2r, m2c);
    
    for (int i = 0; i < m2r; i++) {
        for (int j = 0; j < m2c; j++) {
            printf("Enter B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matb[i][j]);
        }
    }
    for (int i = 0; i < m1r; i++) {
        for (int j = 0; j < m2c; j++) {
            sum[i][j] = 0;
            for (int k = 0; k < m1c; k++) { 
                sum[i][j] += mata[i][k] * matb[k][j];
            }
        }
    }
    printf("\n--- Result Matrix C (%dx%d) ---\n", m1r, m2c);
    for (int a = 0; a < m1r; a++) {
        printf("|");
        for (int b = 0; b < m2c; b++) {
            printf("\t%d\t", sum[a][b]);
        }
        printf("|\n");
    }
    return 0;
}