#include <stdio.h>  // Include the standard input/output library.
#include <math.h>   // Include the math library.

int main(void)  // Start of the main function.
{
  int a = 5;  // Declare and initialize an integer variable named 'a' with a value of 5.
  int b = 2;  // Declare and initialize an integer variable named 'b' with a value of 2.

  printf("%d + %d = %d\n", a, b, a + b);  // Print the sum of 'a' and 'b'.
  printf("%d - %d = %d\n", a, b, a - b);  // Print the difference of 'a' and 'b'.
  printf("%d * %d = %d\n", a, b, a * b);  // Print the product of 'a' and 'b'.
  printf("%d / %d = %d\n", a, b, a / b);  // Print the division of 'a' by 'b'.
  printf("%d %% %d = %d\n", a, b, a % b);  // Print the remainder of 'a' divided by 'b'.

  a++;  // Increment the value of 'a' by 1.
  printf("a: %d\n", a);  // Print the updated value of 'a'.
  a--;  // Decrement the value of 'a' by 1.
  printf("a: %d\n", a);  // Print the updated value of 'a'.

  ++a;  // Increment the value of 'a' by 1.
  printf("a: %d\n", a);  // Print the updated value of 'a'.

  printf("a++: %d\n", a++);  // Print the current value of 'a', then increment 'a' by 1.
  printf("a: %d\n", a);  // Print the updated value of 'a'.

  printf("++a: %d\n", ++a);  // Increment 'a' by 1, then print the updated value of 'a'.

  double x = 5.0;  // Declare and initialize a double variable named 'x' with a value of 5.0.
  double y = 2.0;  // Declare and initialize a double variable named 'y' with a value of 2.0.

  printf("%f + %f = %f\n", x, y, x / y);  // Print the division of 'x' by 'y'.

  double z = pow(x, y);  // Calculate 'x' raised to the power of 'y' and store the result in 'z'.

  printf("%f^%f = %f\n", x, y, z);  // Print the result of 'x' raised to the power of 'y'.

  return 0;  // End of the main function and return 0 to indicate successful program execution.
}



