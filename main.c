#include <stdio.h>
#include <stdlib.h> //atoi

// Basic factorial
double factorial(double n) {
    double factorial = n;
    // Multiply n by n - i, where i is all numbers less than n and greater than 0
    for (double i = n - 1; i > 0; i--)
        factorial *= (n - i);

    return factorial;
}

// Superfactorial
double superfactorial(double n) {
    double f = factorial(n);
    // Multiply n! by (n-i)! where i is all numbers less than n and greater than 0
    for (double i = n - 1; i > 0; i--)
        f *= factorial(i);

    return f;
}

int main(int argc, char *argv[]) {
    // If the number of args is less than 2, the user hasn't provided a number
    if (argc < 2) {
        int a = -1;
        // Prompt the user for a number, hope they actually input a number
        printf("Enter a positive integer: ");
        scanf("%d", &a);

        // Show the result clearly
        printf("The superfactorial of %d is %.lf\n", a, superfactorial(a));
    }
        // If the user has provided an arg, directly show the result
    else
        printf("%lf.\n", superfactorial(atoi(argv[1])));

    return 0;
}

