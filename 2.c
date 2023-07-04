#include <stdio.h>

// Function to find the greatest common divisor (GCD) using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to find the LCM of two numbers using GCD
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n;  // Number of input values
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int values[n];  // Array to store the input values
    printf("Enter the values: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }

    // Initialize the LCM as the first value
    int result = values[0];

    // Calculate the LCM of all values using the LCM of two numbers property
    for (int i = 1; i < n; i++) {
        result = lcm(result, values[i]);
    }

    // Print the result
    printf("The least common multiple is: %d\n", result);

    return 0;
}
