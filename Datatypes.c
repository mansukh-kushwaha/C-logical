#include <stdio.h>
int main() {
    int I;
    float F;
    char C;
    printf("Enter an integer: ");
    scanf("%d", &I);
    printf("Enter a float: ");
    scanf("%f", &F);
    printf("Enter a character: ");
    scanf(" %c", &C);     
    printf("\nYou entered:\n");
    printf("Integer: %d\n", I);
    printf("Float: %f\n", F);
    printf("Character: %c\n", C);
    return 0;
}
