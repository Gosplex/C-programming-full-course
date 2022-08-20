#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    const int NUM1 = 5;
    const int NUM2 = 10;   // Using Constant. It cannot be re-declared on tampered with anywhere in the code.

    printf("%d\n", 5 + 5); // Addition
    printf("%f\n", 5.0 - 3); // Subtraction
    printf("%d\n", 5 * 4); // Multiplication
    printf("%f\n", 5.0 / 4); // Division
    printf("%f\n", pow(2,3)); // Power
    printf("%d\n", sqrt(36)); // Squareroot
    printf("%f\n", ceil(35.3)); // round-up
    printf("%f\n", floor(35.7)); // round-down
    printf("%d", NUM1 + NUM2);
    return 0;
}