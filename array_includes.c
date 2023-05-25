#include <stdio.h>  // Include the standard input/output library.
#include <stdbool.h>  // Include the boolean data type library.

bool includes(int array[], int length, int value);  // Function declaration for the includes function.

int main(void)  // Start of the main function.
{

  int a[] = {1,2,3,4,5,6,7,8,9,10};  // Declare and initialize an integer array named 'a' with 10 values.
  int length = 10;  // Declare and initialize an integer variable 'length' with the value 10.

  if (includes(a, length, 11))  // Call the includes function with 'a', 'length', and 11 as arguments, and check the returned value.
    printf("Found 11 in array a\n");  // Print a message indicating that 11 is found in 'a' if the condition is true.
  else
    printf("Could not find 11 in array a\n");  // Print a message indicating that 11 is not found in 'a' if the condition is false.
  
  return 0;  // End of the main function and return 0 to indicate successful program execution.
}

bool includes(int array[], int length, int value)  // Start of the includes function.
{

  for (int i = 0; i < length; i++)  // Start of a loop that iterates from 0 to 'length - 1'.
  {

    if (array[i] == value) return true;  // Check if 'array[i]' is equal to 'value', and if true, return true.
  }

  return false;  // Return false if 'value' is not found in the array.
}

