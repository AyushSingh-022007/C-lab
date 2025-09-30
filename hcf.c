#include <stdio.h>

// Recursive function to find GCD
int GCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Handling negative numbers
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    int result = GCD(num1, num2);

    printf("The GCD of %d and %d is: %d\n", num1, num2, result);

    return 0;
}