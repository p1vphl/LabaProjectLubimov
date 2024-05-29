#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int lovelyBits(int n) {
    int chetBits = n & 0xAAAAAAAA;
    int nechetBits = n & 0x55555555;
    chetBits >>= 1;
    nechetBits <<= 1;
    return (chetBits | nechetBits);
}

void lab7() {
    int N;
    printf("Enter an integer N: ");
    scanf("%u", &N);
    int result = lovelyBits(N);
    printf("The result after replacing pairs of binary digits in the mirror order: %u\n", result);
}