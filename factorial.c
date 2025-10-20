#include <stdio.h>
// Recursive factorial using double
double FACT_recursive(int n) {
    if (n == 0)
        return 1.0;
    return n * FACT_recursive(n - 1);
}
// Non-recursive factorial using double
double FACT_nonrecursive(int n) {
    double fact = 1.0;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
// Binomial coefficient
double C(int n, int r, int choice) {
    double nfact, rfact, nrfact;
    if (choice == 1) {
        nfact = FACT_recursive(n);
        rfact = FACT_recursive(r);
        nrfact = FACT_recursive(n - r);
    } else {
        nfact = FACT_nonrecursive(n);
        rfact = FACT_nonrecursive(r);
        nrfact = FACT_nonrecursive(n - r);
    }
    return nfact / (rfact * nrfact);
}
int main() {
    int n, choice;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("1. Recursive factorial\n2. Non-recursive factorial\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("\nBinomial Coefficients for n = %d\n", n);
    printf(" r   C(n,r)\n");
    printf("------------\n");

    for (int r = 0; r <= n; r++) {
        printf(" %d   %.0lf\n", r, C(n, r, choice));  // %.0lf = print without decimals
    }

    return 0;
}
