#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void lab1() {
    double pi = 3.14159;
    double r, a;
    printf("r = ");
    scanf("%lf", &r);
    printf("a = ");
    scanf("%lf", &a);
    double area_circle = pi * r * r;
    double area_square = a * a;
    double remaining_area = area_circle - area_square;
    printf("Remaining area: %lf\n", remaining_area);
}