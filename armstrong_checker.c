#include <stdio.h>  // Include the standard input/output library.
#include <stdbool.h>  // Include the library for boolean data type.
#include <math.h>  // Include the math library.

bool is_armstrong(int number);  // Function declaration for the is_armstrong function.

int main(void)  // Start of the main function.
{

  if (is_armstrong(371))  // Check if 371 is an Armstrong number using the is_armstrong function.
    printf("371 is an Armstrong number!\n");  // Print a message indicating that 371 is an Armstrong number.
  else
    printf("371 is NOT an Armstrong number!\n");  // Print a message indicating that 371 is not an Armstrong number.

  for (int i = 0; i <= 10000; i++)  // Iterate through numbers from 0 to 10000.
    if (is_armstrong(i)) printf("%d\n", i);  // Check if the current number is an Armstrong number and print it if true.

  return 0;  // End of the main function and return 0 to indicate successful program execution.
}

bool is_armstrong(int number)  // Start of the is_armstrong function.
{

  int total_digits = 0;  // Declare and initialize an integer variable named 'total_digits' to store the total number of digits in 'number'.
  int digits_left = number;  // Declare and initialize an integer variable named 'digits_left' to store the remaining digits to be processed.

  while (digits_left != 0)  // Continue the loop until all digits of 'number' have been processed.
  {
    total_digits++;  // Increment the total number of digits.
    digits_left /= 10;  // Remove the rightmost digit from 'digits_left'.
  }
  
  int digit = 0;  // Declare an integer variable named 'digit' to store the current digit being processed.
  int total = 0;  // Declare an integer variable named 'total' to store the sum of each digit raised to the power of 'total_digits'.
  int number_left = number;  // Declare and initialize an integer variable named 'number_left' to store the remaining digits to be processed.

  while (number_left != 0)  // Continue the loop until all digits of 'number' have been processed.
  {

    digit = number_left % 10;  // Get the rightmost digit of 'number_left'.

    total += pow(digit, total_digits);  // Add the current digit raised to the power of 'total_digits' to 'total'.

    number_left /= 10;  // Remove the rightmost digit from 'number_left'.
  }

  return (total == number);  // Return true if 'total' is equal to 'number', indicating that 'number' is an Armstrong number; otherwise, return false.
}

