//BUCKET SORT

#include <stdio.h>
#include <stdlib.h>

#define MAX_BUCKETS 10     

void insertionSort(int arr[], int n) {
    int i, key, j;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    printf("Enter %d elements (positive integers):\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int *buckets[MAX_BUCKETS];
    int bucketCount[MAX_BUCKETS];

    for (i = 0; i < MAX_BUCKETS; i++) {
        buckets[i] = (int*)malloc(n * sizeof(int));
        bucketCount[i] = 0;
    }

    int max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    for (i = 0; i < n; i++) {
        int bi = (arr[i] * MAX_BUCKETS) / (max + 1); // bucket index
        buckets[bi][bucketCount[bi]] = arr[i];
        bucketCount[bi]++;
    }

    for (i = 0; i < MAX_BUCKETS; i++) {
        if (bucketCount[i] > 0)
            insertionSort(buckets[i], bucketCount[i]);
    }

    int idx = 0;
    for (i = 0; i < MAX_BUCKETS; i++) {
        for (j = 0; j < bucketCount[i]; j++)
            arr[idx++] = buckets[i][j];
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    for (i = 0; i < MAX_BUCKETS; i++)
        free(buckets[i]);
    free(arr);

    return 0;
}

