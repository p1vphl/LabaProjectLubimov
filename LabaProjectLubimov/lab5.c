#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void lab5() {
    int arr10[10] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 1 };
    int sumchet = 0;
    int sumnech = 0;

    for (int i = 0; i < 10; i++) {
        if (arr10[i] % 2 == 0) {
            sumchet += arr10[i];
        }
        else {
            sumnech += arr10[i];
        }
    }

    if (sumchet > sumnech) {
        printf("The sum of even numbers %d more than the sum of odd numbers %d\n", sumchet, sumnech);
    }
    else {
        printf("The sum of odd numbers %d more than the sum of even numbers %d\n", sumnech, sumchet);
    }
}