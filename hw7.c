#include <stdio.h>

void swap_arrays(int arr1[], int arr2[], int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {7, 8, 9, 10, 11, 12};
    int size = sizeof(arr1) / sizeof(arr1[0]);  // 배열 크기 계산

    printf("before swap:\n");
    for (int i = 0; i < size; i++) {
        printf("arr1[%d] = %d, arr2[%d] = %d\n", i, arr1[i], i, arr2[i]);
    }

    swap_arrays(arr1, arr2, size);

    printf("\nafter swap:\n");
    for (int i = 0; i < size; i++) {
        printf("arr1[%d] = %d, arr2[%d] = %d\n", i, arr1[i], i, arr2[i]);
    }

    return 0;
}
