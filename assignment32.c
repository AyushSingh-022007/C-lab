// WAP to read a list of integers and store it in a single dimensional array. 
// Write a C program to count and display positive, negative, odd, and even numbers in an array.
#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int pos = 0, neg = 0, even = 0, odd = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            pos++;
        else
            neg++;

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("\nPositive numbers = %d", pos);
    printf("\nNegative numbers = %d", neg);
    printf("\nEven numbers = %d", even);
    printf("\nOdd numbers = %d\n", odd);
    return 0;
}
