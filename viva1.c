#include <stdio.h>

int main()
{
    int A[100][100], B[100][100], C[100][100];
    int r1, c1, r2, c2;
    int i, j, k;
    printf("enter rows and columns of first: ");
    scanf("%d %d", &r1, &c1);

    printf("enter rows and columns of second : ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2)
    {
        printf("Matrix multiplication not possible!\n"); 
        return 0;
    }
    printf("Enter elements of first:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of second:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\nResultant Matrix:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
