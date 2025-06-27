#include <stdio.h>

// Function to calculate GCD using the Euclidean algorithm
void gcd(int a, int b, int *result) {
    while (b != 0) {
        int temp = b;
        b = a % b;  // Remainder
        a = temp;   // Update a
    }
    *result = a;  // Store the GCD in the result variable
}

int main() {
    int num1, num2, result;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call gcd function
    gcd(num1, num2, &result);

    // Display the result
    printf("GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}
