#include <stdio.h>

void printBinary(int num) {
    int i;
    int bit;
    int size = sizeof(num) * 8;  // size in bits for the given data type
    printf("Binary: ");
    for (i = size - 1; i >= 0; i--) {
        bit = (num >> i) & 1;  // Shift the bits to the right and mask the lowest bit
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int num;

    // Taking input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Printing binary, octal and hexadecimal
    printBinary(num);
    printf("Octal: %o\n", num);
    printf("Hexadecimal: %X\n", num);

    return 0;
}
