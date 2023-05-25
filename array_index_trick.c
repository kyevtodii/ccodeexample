#include <stdio.h>  // Include the standard input/output library.

int main()  // Start of the main function.
{

  int a[] = {10,20,30,40,50};  // Declare and initialize an integer array named 'a' with 5 values.

  printf("a[2] = %d\n", a[2]);  // Print the value at index 2 of 'a'.

  printf("1[a] = %d\n", 1[a]);  // Print the value at index 1 of 'a' using the alternate syntax.

  for (int i = 0; i < 5; i++)  // Start of a loop that iterates from 0 to 4.
    i[a] = i + 4;  // Assign values to 'a' using the alternate syntax.

  for (int i = 0; i < 5; i++)  // Start of a loop that iterates from 0 to 4.
    printf("%d[a] = %d\n", i, i[a]);  // Print the value at index i of 'a' using the alternate syntax.

  *(2 + a) = 200;  // Assign a value to 'a' using pointer arithmetic.

  printf("a[2] = %d\n", a[2]);  // Print the value at index 2 of 'a'.

  return 0;  // End of the main function and return 0 to indicate successful program execution.
}

