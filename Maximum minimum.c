#include <stdio.h>

int main() {
    int numbers[10];
    int i, max, min;

    printf("Enter 10 numbers:\n");

    // Read 10 numbers from the user
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Assume the first number is both the maximum and minimum
    max = numbers[0];
    min = numbers[0];

    // Find the maximum and minimum numbers
    for (i = 1; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }

        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    // Display the maximum and minimum numbers
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}
