#include <stdio.h>
#include <math.h>

#define PI M_PI

int main() {
    // Data Types:
    int number_of_apples = 5;
    float amount_of_sugar = 2.75; // In grams
    double pi = PI;
    char character = 'A';
    char string[] = "Hello, world!";

    // Bitwise operators:
    int bitwise_and = 22 & 14; // 6
    // 14:   01110
    // 20:   01101
    //       01100 = 6
    // In bitwise and (&), we have: (1 + 1= 1; Everything else equals 0)
    int bitwise_or = 12 | 6; // 14
    // 12:      0101
    // 6:       0110
    //          0111 = 14
    // In bitwise or (|), we have: (0 + 0 = 0; Everything else equals 1)

    int bitwise_xor = 13 ^ 7; // 9
    // 13: 1011
    // 7:  1110
    //     0101 = 10
    // In bitwise xor (^), we have: (0 + 0 = 0 & 1 + 1 = 0; everything else equals 1)

    int bitwise_not = ~21; // Still did not understand this... :/

    printf("Bitwise [(&)] is: %d\n", bitwise_and);
    printf("Bitwise [(|)] is: %d\n", bitwise_or);
    printf("Bitwise [(^)] is: %d\n", bitwise_xor);
    printf("Bitwise [(~)] is: %d\n", bitwise_not);

    return 0;
}
