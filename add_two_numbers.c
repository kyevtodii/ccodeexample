#include <stdio.h>  // Include the standard input/output library.

int main()  // Start of the main function.
{

  double number1, number2, sum;  // Declare three double variables named 'number1', 'number2', and 'sum'.

  printf("Number 1: ");  // Print the prompt asking for the input of Number 1.

  scanf("%lf", &number1);  // Read a double value from the user and store it in 'number1'.

  printf("Number 2: ");  // Print the prompt asking for the input of Number 2.

  scanf("%lf", &number2);  // Read a double value from the user and store it in 'number2'.

  sum = number1 + number2;  // Calculate the sum of 'number1' and 'number2' and store the result in 'sum'.

  printf("Sum: %f\n", sum);  // Print the value of 'sum' as the sum result.

  return 0;  // End of the main function and return 0 to indicate successful program execution.
}

