// We can conceptualize the absolute value of a number as the non-negative value
// of that number, disregarding its sign. Alternatively, it can be understood as the
// "distance" of that number from zero. The absolute values (represented as |value|)
// of 5, -5, 0, and -2.5 are provided below:

// |5| = 5
// |-5| = 5
// |0| = 0
// |-2.5| = 2.5

#include <stdio.h>

// The abs() function resides in the stdlib.h library, necessitating its inclusion
#include <stdlib.h>

// The fabs() function is present in the math.h library, thus we must include it
#include <math.h>

int main(void)
{
// Declare and initialize an integer variable x with a value of -5
    int x = -5;

// The abs() function accepts an integer value as an argument and returns its
// absolute value. Here, we assign the absolute value of x, obtained using abs(),
// to the variable abs_x that we have declared.
    int abs_x = abs(x);

// Output the absolute value of x stored in the abs_x variable
    printf("abs(x): %d\n", abs_x);

// Declare and initialize a double precision variable y with a value of -2.5
    double y = -2.5;

// The fabs() function allows us to determine the absolute value of double/float
// values. Similar to abs(), we pass the number as an argument to the function,
// which then returns its absolute value. Thus, we assign the absolute value of y,
// calculated using fabs(), to the double precision variable fabs_y that we have declared.
    double fabs_y = fabs(y);

// Output the absolute value of y stored in the fabs_y variable
    printf("fabs(y): %f\n", fabs_y);

    return 0;
}
