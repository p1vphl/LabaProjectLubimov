#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void lab3() {
    char c;
    int vowel = 0, consonant = 0;
    int word_count = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (vowel == 1 && consonant == 1) {
                word_count++;
            }
            vowel = 0;
            consonant = 0;
        }
        else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowel = 1;
        }
        else {
            consonant = 1;
        }
    }

    printf("The number of words starting with a vowel letter and ending with a consonant letter: %d\n", word_count);
}