#include <stdio.h>

// Function to check Endianness
int isLittleEndian() {
    unsigned int num = 1;
    return *((unsigned char*)&num);
}

// Function to convert Little Endian to Big Endian and vice-versa
unsigned int convertEndianness(unsigned int num) {
    return ((num >> 24) & 0xFF) | ((num >> 8) & 0xFF00) | ((num << 8) & 0xFF0000) | ((num << 24) & 0xFF000000);
}

int main() {
    unsigned int number;
    printf("Enter a number (unsigned integer): ");
    scanf("%u", &number);

    // Print the content of each byte location
    printf("\nContent of each byte location:\n");
    unsigned char *ptr = (unsigned char *)&number;
    for (int i = 0; i < sizeof(number); i++) {
        printf("Byte %d: %02X\n", i + 1, ptr[i]);
    }

    // Check Endianness and print the result
    if (isLittleEndian()) {
        printf("\nThe host machine is in Little Endian.\n");
        // Convert Little Endian to Big Endian
        number = convertEndianness(number);
    } else {
        printf("\nThe host machine is in Big Endian.\n");
        // Convert Big Endian to Little Endian
        number = convertEndianness(number);
    }

    // Print the converted number
    printf("\nConverted Number: %u\n", number);

    return 0;
}

