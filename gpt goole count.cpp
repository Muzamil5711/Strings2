#include <stdio.h>
#include <string.h>

int main() {
    char scount[20];
    gets(scount);

    int len = strlen(scount);
    int count = 0;

    for (int i = 0; i < len; i++) {
        count = 1;

        for (int j = i + 1; j < len; j++) {
            if (scount[j] == scount[i]) {
                count++;
            }
        }

        int isCountedBefore = 0; // Flag to keep track of whether the character has been counted before.

        for (int k = 0; k < i; k++) {
            if (scount[k] == scount[i]) {
                isCountedBefore = 1; // Set the flag to 1 if the character has been counted before.
                break;
            }
        }

        if (!isCountedBefore) { // Only print the character count if it's not counted before.
            printf("'%c': %d\n", scount[i], count);
        }
    }

    return 0;
}

