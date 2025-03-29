#include <stdio.h>

int linearSearch(int arr[], int n, int key, int *comparisons)
{
    for (int i = 0; i < n; i++)
    {
        (*comparisons)++;
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int n, key;
    printf("Enter size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter key to search: ");
    scanf("%d", &key);
    int comparisons = 0;
    int result = linearSearch(arr, n, key, &comparisons);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    printf("Total comparisons made: %d\n", comparisons);

    return 0;
}
