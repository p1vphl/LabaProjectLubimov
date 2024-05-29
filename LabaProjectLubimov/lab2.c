#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double factorial(int n) {
    double result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

double sum_series(double x, int n) {
    double sum = 0;
    int i = 1;
    while (i <= n) {
        double result = 1;
        int j = 0;
        while (j < i) {
            result *= x;
            j++;
        }
        sum += result / factorial(i);
        i += 2;
    }
    return sum;
}

void lab2_part1() {
    double x;
    int n;
    printf("Enter a value x: ");
    scanf("%lf", &x);
    printf("Enter a value n: ");
    scanf("%d", &n);
    printf("The sum of the first %d elements of the series: %lf\n", n, sum_series(x, n));
}

void decrement_loop(int n) {
    for (int i = n; i > 0; i--) {
        printf("%d\n", i);
    }
}

void lab2_part2() {
    decrement_loop(5);
}