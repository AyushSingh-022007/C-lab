// WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B. Read matrix A and matrix B in row major order respectively. Print both the input matrices and resultant matrix with suitable headings and output should be in matrix format only. Program must check the compatibility of orders of the matrices for multiplication. Report appropriate message in case of incompatibility.
#include <stdio.h>
int main()
{
    int m, n, p, q, var, k = 0;
    printf("Enter no.of rows and columns of matrix A:");
    scanf("%d %d", &m, &n);
    int A[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter no.of rows of matrix B:");
    scanf("%d %d", &p, &q);
    int B[p][q];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    if (n == p)
    {
        int C[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                C[i][j] = 0;
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (var = 0; var < n; var++)
            {
                for (int j = 0; j < q; j++)
                {
                    C[i][j] += A[i][var] * B[var][j];
                }
            }
        }
        printf("\n A     B     C\n");
        for (int i = 0; i < m || i < p; i++)
        {
            for (var = 0; var < n; var++)
            {
                if (i < m)
                {
                    printf("%d ", A[i][var]);
                }
                else
                {
                    printf("  ");
                }
            }
            if (i == m / 2)
            {
                printf("X");
            }
            if (i != m / 2)
            {
                printf(" ");
            }
            for (var = 0; var < q; var++)
            {
                if (i < p)
                {
                    printf(" %d", B[i][var]);
                }
                else
                {
                    printf("  ");
                }
            }
            if (i == m / 2)
            {
                printf(" =");
            }
            if (i != m / 2)
            {
                printf("  ");
            }
            for (var = 0; var < q; var++)
            {
                if (i < m)
                {
                    printf(" %d", C[i][var]);
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("Product not possible");
    }
    return 0;
}