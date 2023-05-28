#include <stdio.h>  // Include the standard input/output library.

int main()  // Start of the main function.
{

  int array[5];  // Declare an integer array named 'array' with 5 elements.

  array[2] = 5;  // Assign the value 5 to the element at index 2 of the 'array'.

  printf("     array: %zu\n", array);  // Print the value of 'array'.

  printf(" array + 1: %zu\n\n", array + 1);  // Print the address of 'array' incremented by 1.

  printf("    &array: %zu\n", &array);  // Print the address of 'array'.

  printf("&array + 1: %zu\n\n", &array + 1);  // Print the address of 'array' incremented by 1.

  int matrix[3][5] =  // Declare and initialize a 2-dimensional integer array named 'matrix'.
  {
    {0,1,2,3,4},
    {5,6,7,8,9},
    {10,11,12,13,14}
  };

  printf("        matrix[1]: %zu\n", matrix[1]);  // Print the address of 'matrix[1]'.

  printf("    matrix[1] + 1: %zu\n", matrix[1] + 1);  // Print the address of 'matrix[1]' incremented by 1.

  printf(" *(matrix[1] + 1): %zu\n\n", *(matrix[1] + 1));  // Print the value at the address 'matrix[1] + 1'.

  printf("       &matrix[1]: %zu\n", &matrix[1]);  // Print the address of 'matrix[1]'.

  printf("   &matrix[1] + 1: %zu\n", &matrix[1] + 1);  // Print the address of 'matrix[1]' incremented by 1.

  printf("*(&matrix[1] +1 ): %zu\n\n", *(&matrix[1] + 1));  // Print the value at the address '&matrix[1] + 1'.

  int *pointer = (int *) (&matrix[1] + 1);  // Declare and initialize a pointer 'pointer' to the address '&matrix[1] + 1'.

  printf("pointer: %zu\n", pointer);  // Print the value of 'pointer'.

  printf("*pointer: %zu\n", *pointer);  // Print the value at the address stored in 'pointer'.

  printf("*(*(&matrix[1] + 1)): %zu\n", *(*(&matrix[1] + 1)));  // Print the value at the address '&matrix[1] + 1' points to.

  return 0;  // End of the main function and return 0 to indicate successful program execution.
}

