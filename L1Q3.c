#include <stdio.h>

int main() {
    unsigned int number;
    printf("Enter a number (unsigned integer): ");
    scanf("%u", &number);

    // Extracting each byte using bitwise operations
    unsigned char byte1 = (number >> 24) & 0xFF;
    unsigned char byte2 = (number >> 16) & 0xFF;
    unsigned char byte3 = (number >> 8) & 0xFF;
    unsigned char byte4 = number & 0xFF;

    // Printing the content of each byte
    printf("Byte 1: %u\n", byte1);
    printf("Byte 2: %u\n", byte2);
    printf("Byte 3: %u\n", byte3);
    printf("Byte 4: %u\n", byte4);

    return 0;
}

