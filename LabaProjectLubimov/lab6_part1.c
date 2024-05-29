#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 3
#define K 4

void lab6_part1() {
    int arr[N][K];
    printf("Enter the array elements:\n");

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int min = arr[0][0], max = arr[0][0];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            if (arr[i][j] < 0) {
                arr[i][j] = min;
            }
            else {
                arr[i][j] = max;
            }
        }
    }

    printf("Modified array:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}