#define _CRT_SECURE_NO_WARNINGS
#include "lab.h"
#include <stdio.h>
#include <stdlib.h> // Для использования system("pause")

int main() {
    int choice;
    printf("Choose a number:\n");
    printf("1. Calculating the remaining area\n");
    printf("2. Counting words starting with a vowel and ending with a consonant letter\n");
    printf("3. Vpotoke function\n");
    printf("4. Comparing sums of even and odd numbers\n");
    printf("5. Modification of an array by replacing negative elements with a minimum value and positive elements with a maximum value\n");
    printf("6. Sorting an array using the bubble method\n");
    printf("7. Replacing pairs of binary digits in the mirror order\n");
    printf("8. Calculating the sum of a series\n");
    printf("9. Decreasing cycle\n");
    printf("Enter the program number: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        lab1();
        break;
    case 2:
        lab3();
        break;
    case 3:
        lab4();
        break;
    case 4:
        lab5();
        break;
    case 5:
        lab6_part1();
        break;
    case 6:
        lab6_part2();
        break;
    case 7:
        lab7();
        break;
    case 8:
        lab2_part1();
        break;
    case 9:
        lab2_part2();
        break;
    default:
        printf("Incorrect number.\n");
    }

    system("pause"); // Ожидание нажатия любой клавиши перед закрытием программы
    return 0;
}
