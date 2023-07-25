#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void encryptString(char *str, int shift, char direction) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (direction == 'L') {
            str[i] = (str[i] - 'a' + shift) % 26 + 'a'; // Shift left
        } else if (direction == 'R') {
            str[i] = (str[i] - 'a' - shift + 26) % 26 + 'a'; // Shift right
        }
    }
}

int main() {
    char inputString[100];
    int shiftNumber, directionNumber;
    char direction;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate two random numbers for shift and direction
    shiftNumber = rand() % 5 + 1; // Random number between 1 and 5
    directionNumber = rand() % 2; // Random number either 0 or 1

    // Convert the directionNumber to actual direction
    if (directionNumber == 0) {
        direction = 'L'; // Left direction
    } else {
        direction = 'R'; // Right direction
    }

    printf("Enter a string to encrypt: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the newline character from the input string
    inputString[strcspn(inputString, "\n")] = '\0';

    printf("Original String: %s\n", inputString);

    // Encrypt the string with the generated random numbers
    encryptString(inputString, shiftNumber, direction);
    printf("Encrypted String: %s\n", inputString);

    printf("Shift Number: %d\n", shiftNumber);
    printf("Direction: %c\n", direction);

    return 0;
}

