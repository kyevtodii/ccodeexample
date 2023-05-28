#include <stdio.h>  // Include the standard input/output library.

int main(void)  // Start of the main function.
{
  int a;  // Declare an integer variable 'a'.

  a = 5;  // Assign the value 5 to 'a'.
  printf("a: %d\n", a);  // Print the value of 'a'.

  a += 2;  // Increment 'a' by 2.
  printf("a: %d\n", a);  // Print the updated value of 'a'.

  a -= 2;  // Decrement 'a' by 2.
  printf("a: %d\n", a);  // Print the updated value of 'a'.

  a *= 2;  // Multiply 'a' by 2.
  printf("a: %d\n", a);  // Print the updated value of 'a'.

  a /= 2;  // Divide 'a' by 2.
  printf("a: %d\n", a);  // Print the updated value of 'a'.

  a %= 2;  // Compute the remainder of 'a' divided by 2.
  printf("a: %d\n", a);  // Print the updated value of 'a'.

  return 0;  // End of the main function and return 0 to indicate successful program execution.
}

