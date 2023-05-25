#include <stdio.h>  // Include the standard input/output library.
#include <stdlib.h>  // Include the standard library for malloc and free.
#include <string.h>  // Include the string library for memcpy.

int *concat(int *a1, size_t len1, int *a2, size_t len2);  // Function declaration for the concat function.

int main(int argc, char *argv[])  // Start of the main function with command line arguments.
{

  int array1[] = {0,1,2,3,4};  // Declare and initialize an integer array named 'array1' with 5 values.
  int array2[] = {5,6,7,8,9};  // Declare and initialize an integer array named 'array2' with 5 values.

  int *array3 = concat(array1, 5, array2, 5);  // Call the concat function to concatenate 'array1' and 'array2' and assign the result to 'array3'.

  for (int i = 0; i < 10; i++)  // Start of a loop that iterates from 0 to 9.
    printf("array3[%d] = %d\n", i, array3[i]);  // Print the value of 'array3[i]' along with the index 'i'.

  printf("\n");  // Print a newline character for spacing.

  free(array3);  // Deallocate the memory used by 'array3' using the free function.

  return 0;  // End of the main function and return 0 to indicate successful program execution.
}

int *concat(int *a1, size_t len1, int *a2, size_t len2)  // Start of the concat function.
{

  int *new_array = malloc(sizeof(int) * (len1 + len2));  // Allocate memory for a new array that can hold the concatenated elements.

  memcpy(new_array, a1, sizeof(int) * len1);  // Copy the elements from 'a1' to the new array.

  memcpy(new_array + len1, a2, sizeof(int) * len2);  // Copy the elements from 'a2' to the new array, starting from the position after 'a1'.

  return new_array;  // Return the new array containing the concatenated elements.
}

