#include <stdio.h>  // Include the standard input/output library.
#include <stdlib.h>  // Include the standard library for malloc and free.

int *array_copy(int *array, int length);  // Function declaration for the array_copy function.

int main(void)  // Start of the main function.
{

  int a1[] = {1,2,3,4,5};  // Declare and initialize an integer array named 'a1' with 5 values.
  int a2[] = {99,50,30,70,80,90,100,50};  // Declare and initialize an integer array named 'a2' with 8 values.

  int *a1_copy = array_copy(a1, 5);  // Call the array_copy function to create a copy of 'a1' and assign it to 'a1_copy'.
  int *a2_copy = array_copy(a2, 8);  // Call the array_copy function to create a copy of 'a2' and assign it to 'a2_copy'.

  a1[0] = 10;  // Modify the first element of 'a1' to 10.
  for (int i = 0; i < 5; i++)  // Start of a loop that iterates from 0 to 4.
    printf("a1_copy[%d]=%d\n", i, a1_copy[i]);  // Print the value of 'a1_copy[i]' along with the index 'i'.

  a2[0] = 0;  // Modify the first element of 'a2' to 0.
  printf("\n");  // Print a newline character for spacing.
  for (int i = 0; i < 8; i++)  // Start of a loop that iterates from 0 to 7.
    printf("a2_copy[%d]=%d\n", i, a2_copy[i]);  // Print the value of 'a2_copy[i]' along with the index 'i'.

  printf("\n");  // Print a newline character for spacing.
  printf("a1: %p\na1_copy: %p\n", a1, a1_copy);  // Print the memory addresses of 'a1' and 'a1_copy'.

  free(a1_copy);  // Deallocate the memory used by 'a1_copy' using the free function.
  free(a2_copy);  // Deallocate the memory used by 'a2_copy' using the free function.

  return 0;  // End of the main function and return 0 to indicate successful program execution.
}

int *array_copy(int *array, int length)  // Start of the array_copy function.
{

  int *c = malloc(length * sizeof(int));  // Allocate memory for a new array 'c' with the specified length.

  for (int i = 0; i < length; i++)  // Start of a loop that iterates from 0 to 'length - 1'.
    c[i] = array[i];  // Copy the value of 'array[i]' to 'c[i]'.

  return c;  // Return the new array 'c' containing the copied elements.
}





