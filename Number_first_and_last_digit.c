#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit;
    printf("Enter an integer: ");
    scanf("%d", &number);
    lastDigit = number % 10;
    firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }
    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    return 0;
}
