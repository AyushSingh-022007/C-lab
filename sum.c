#include<stdio.h>
int maxSubarraySum(int arr[], int n, int k)
{
    int sum = 0, highest = 0;
    for (int i = 0; i < k; ++i)
        sum += arr[i];
    highest = sum;
    for (int j = k; j < n; ++j)
    {
        sum = sum + arr[j] - arr[j - k];
        if (sum > highest)
            highest = sum;
    }
    return highest;
}
int main()
{
    int size, k;
    int a[100];
    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; ++i)
        scanf("%d", &a[i]);
    printf("Enter subarray size (k): ");
    scanf("%d", &k);
    if (k <= 0 || k > size)
    {
        printf("Invalid input for k.\n");
        return 0;
    }
    int result = maxSubarraySum(a, size, k);
    printf("Maximum sum for subarray of size %d is %d\n", k, result);
    return 0;
}