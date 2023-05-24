#include <stdio.h>  // Include the standard input/output library.

#define DEBUG_OUTPUT 0  // Define a macro named DEBUG_OUTPUT with a value of 0.

int main()  // Start of the main function.
{

  int a[] = {0,1,2,3,4,5,6,7,8,9};  // Declare and initialize an integer array 'a' with the values 0 to 9.

  for (int i = 0; i < 10; i++)  // Start of the 'for' loop to iterate from 0 to 9.
    a[i] = a[i] * 5;  // Multiply each element of 'a' by 5 and store the result back in the same position.

  #ifdef DEBUG_OUTPUT  // Check if the DEBUG_OUTPUT macro is defined and non-zero.
  for (int i = 0; i < 10; i++)  // Start of the 'for' loop to iterate from 0 to 9.
    printf("a[%d] = %d\n", i, a[i]);  // Print the elements of 'a' with their indices.
  #endif  // End of the conditional compilation block.

  #ifdef DEBUG_OUTPUT  // Check if the DEBUG_OUTPUT macro is defined and non-zero.
  printf("Additional output statement.\n");  // Print an additional output statement.
  #endif  // End of the conditional compilation block.

  int sum = 0;  // Declare and initialize a variable 'sum' to 0.
  for (int i = 0; i < 10; i++)  // Start of the 'for' loop to iterate from 0 to 9.
    sum += a[i];  // Add each element of 'a' to the 'sum' variable.

  printf("sum = %d\n", sum);  // Print the value of 'sum'.

  return 0;  // End of the main function and return 0 to indicate successful program execution.
}

