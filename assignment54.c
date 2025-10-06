//Develop a C function ISPRIME (num) that accepts an integer argument and returns 1 if the argument is prime, a 0 otherwise. Write a C program that invokes this function to generate prime numbers between the given ranges.
#include <stdio.h>
int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int low, high;
    printf("Enter lower and upper range: ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are: ", low, high);
    for (int i = low; i <= high; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    return 0;
}
