#include <stdio.h>
int main()
{
    int n, i, j, temp;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 1; i < n; i++)
    {
        if (arr[i] != arr[0])
        {
            printf("Second largest number = %d\n", arr[i]);
            return 0;
        }
    }
    printf("All numbers are equal, no second largest.\n");
    return 0;
}
