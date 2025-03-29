#include <stdio.h>

int binarySearch(int arr[], int l, int h, int key, int *steps)
{
    while (l <= h)
    {
        (*steps)++;
        int m = (l + h) / 2;
        if (arr[m] == key)
            return m;
        if (arr[m] > key)
            h = m - 1;
        else
            l = m + 1;
    }
    return -1;
}

int main()
{
    int n, key;
    printf("Enter size of sorted array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &key);
    int steps = 0;
    int result = binarySearch(arr, 0, n-1, key, &steps);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    printf("Total steps taken: %d\n", steps);

    return 0;
}
