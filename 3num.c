#include <stdio.h>

int main() {
    int num1,  num2,  num3, largest;

    // Input from user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Finding the largest number
    largest = num1; // Assume num1 is largest initially

    if (num2 > largest) {
        largest = num2; // Update largest if num2 is greater
    }

    if (num3 > largest) {
        largest = num3; // Update largest if num3 is greater
    }

    // Output the result
    printf("The largest number is: %d\n", largest);

    return 0;
}
