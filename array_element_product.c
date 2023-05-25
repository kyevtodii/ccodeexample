#include <stdio.h>  // Include the standard input/output library.

int element_product(int array[], int length);  // Function declaration for the element_product function.

int main()  // Start of the main function.
{

  int array[] = {2,5,3,4,2};  // Declare and initialize an integer array named 'array' with 5 values.

  int product = element_product(array, 5);  // Call the element_product function with 'array' and 5 as arguments, and assign the returned value to 'product'.

  printf("product: %d\n", product);  // Print the value of 'product'.

  return 0;  // End of the main function and return 0 to indicate successful program execution.
}

int element_product(int array[], int length)  // Start of the element_product function.
{

  int product = 1;  // Initialize a variable 'product' to 1.

  for (int i = 0; i < length; i++)  // Start of a loop that iterates from 0 to 'length - 1'.
    product *= array[i];  // Multiply 'product' by the value of 'array[i]' and update 'product' with the result.

  return product;  // Return the final product.
}

