#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 3
#define K 4

void bubbleSort(int arr[N][K]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K - 1; j++) {
            for (int k = 0; k < K - j - 1; k++) {
                if (arr[i][k] > arr[i][k + 1]) {
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
    }
}

void lab6_part2() {
    int arr[N][K];
    printf("Enter the array elements:\n");

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    bubbleSort(arr);

    printf("Sorted array:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}