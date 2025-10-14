#include <stdio.h>  // Include standard input/output library for printf()

// Function to represent the differential equation dy/dt = t - y
double derivative(double t, double y) {
    return t - y;  // Returns the rate of change (dy/dt)
}

// Function to perform Euler's Method for solving differential equations numerically
void eulerMethod(double t0, double y0, double h, double endTime) {
    double t = t0;  // Initialize current time t with starting value t0
    double y = y0;  // Initialize current y value with initial condition y0

    printf("Time \t\t Value\n");  // Print table header
    printf("%.21f\t %.21f\n", t, y);  // Print initial time and y values with high precision

    // Loop until time reaches the end time
    while (t < endTime) {
        double dydt = derivative(t, y);  // Compute dy/dt using the derivative function
        y = y + h * dydt;                // Apply Euler’s formula: y_new = y_old + h * dy/dt
        t = t + h;                       // Increment time by step size h
        printf("%.21f\t %.21f\n", t, y); // Print updated time and y values
    }
}

int main() {
    double t0 = 0.0;       // Initial time
    double y0 = 1.0;       // Initial value of y at time t0
    double h = 0.1;        // Step size (the smaller, the more accurate)
    double endTime = 1.0;  // Final time up to which we compute

    printf("Euler's method for numerical integration:\n");  // Intro message
    eulerMethod(t0, y0, h, endTime);  // Call Euler's method with initial parameters

    return 0;  // End of program
}
