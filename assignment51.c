// Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACTNo = 1, if n = 0. Otherwise, FACTNo = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. Tabulate the results for different values of n and r with suitable messages.
#include <stdio.h>
int factRec(int n)
{
    if (n == 0)
    return 1;
    else
        return n * factRec(n - 1);
}
int factNonRec(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    f *= i;
    return f;
}
int main()
{
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    if (r > n)
    {
        printf("Invalid! r cannot be greater than n.\n");
        return 0;
    }
    int nCr1 = factRec(n) / (factRec(r) * factRec(n - r));
    printf("Using recursion: C(%d, %d) = %d\n", n, r, nCr1);
    int nCr2 = factNonRec(n) / (factNonRec(r) * factNonRec(n - r));
    printf("Using non-recursion: C(%d, %d) = %d\n", n, r, nCr2);
    return 0;
}
