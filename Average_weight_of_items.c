#include <stdio.h>

int main() {
    float weight1, weight2;
    float num1, num2;
    float weight,items, average;
    printf("Enter weight of Item 1: ");
    scanf("%f", &weight1);
    printf("Enter number of Item 1: ");
    scanf("%f", &num1);
    printf("Enter weight of Item 2: ");
    scanf("%f", &weight2);
    printf("Enter number of Item 2: ");
    scanf("%f", &num2);
    weight = (weight1 * num1) + (weight2 * num2);
    items = num1 + num2;
    average = weight / items;
    printf("The average value of the items is: %.2f\n", average);
    return 0;
}
