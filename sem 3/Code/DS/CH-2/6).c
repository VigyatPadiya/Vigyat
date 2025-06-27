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

// Function to calculate LCM
void lcm(int a, int b, int *result) {
    int gcd_result;
    gcd(a, b, &gcd_result);  // Get GCD first
    *result = (a * b) / gcd_result;  // Calculate LCM
}

int main() {
    int num1, num2, result;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call lcm function
    lcm(num1, num2, &result);

    // Display the result
    printf("LCM of %d and %d is %d\n", num1, num2, result);

    return 0;
}
