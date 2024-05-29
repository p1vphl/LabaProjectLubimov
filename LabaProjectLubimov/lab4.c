#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void vpotoke(char* str) {
    char result[100] = { 0 };
    char word[20];
    int j = 0;
    int consecutiveVowels = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            word[j++] = str[i];
            if (isVowel(str[i])) {
                consecutiveVowels++;
            }
            else {
                consecutiveVowels = 0;
            }
        }
        else {
            word[j] = '\0'; // Null-terminate the current word
            if (consecutiveVowels < 2) {
                strcat(result, word);
                strcat(result, " ");
            }
            j = 0;
            consecutiveVowels = 0;
        }
    }
    // Check the last word
    word[j] = '\0'; // Null-terminate the last word
    if (consecutiveVowels < 2) {
        strcat(result, word);
    }

    printf("Result: %s\n", result);
}

void lab4() {
    char str[100];
    printf("Enter the line: ");
    fgets(str, sizeof(str), stdin);
    vpotoke(str);
}