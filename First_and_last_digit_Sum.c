#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit, sum;

    // Read an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Find the last digit
    lastDigit = number % 10;

    // Find the first digit
    firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    // Calculate the sum of the first and last digits
    sum = firstDigit + lastDigit;

    // Display the result
    printf("Sum of first and last digit: %d\n", sum);

    return 0;
}
