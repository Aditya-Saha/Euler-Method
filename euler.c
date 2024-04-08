#include <stdio.h>

// Function prototypes
double f(double x, double y);
void euler_method(double x0, double y0, double h, double xn);

int main() {
    // Example usage:
    double x0 = 0.0; // Initial value of x
    double y0 = 1.0; // Initial value of y
    double h = 0.1;  // Step size
    double xn = 1.0; // Final value of x for which y needs to be approximated

    euler_method(x0, y0, h, xn);

    return 0;
}

// Define the differential equation function y' = f(x, y)
double f(double x, double y) {
    // Example differential equation: y' = x + y
    return x + y;
}

// Euler method to approximate the solution of the differential equation
void euler_method(double x0, double y0, double h, double xn) {
    double x = x0;
    double y = y0;

    while (x < xn) {
        // Calculate slope at the current point
        double slope = f(x, y);

        // Update y using Euler's formula: y = y0 + h * f(x, y)
        y = y + h * slope;

        // Move to the next point
        x = x + h;

        // Print the current point and the corresponding value of y
        printf("x = %lf, y = %lf\n", x, y);
    }
}
 