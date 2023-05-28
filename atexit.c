#include <stdio.h>   // Include the standard input/output library.
#include <stdlib.h>  // Include the standard library.
#include <time.h>    // Include the time library.

time_t start, end;  // Declare variables to hold start and end time.

void cleanup();  // Function prototype for the cleanup function.

int main(void)  // Start of the main function.
{

  time(&start);  // Get the current time and store it in 'start'.

  atexit(cleanup);  // Register the cleanup function to be called at program exit.

  int value = 0;  // Declare and initialize an integer variable 'value'.
  printf("Enter: ");  // Print a message asking for input.
  scanf("%d", &value);  // Read an integer from the user and store it in 'value'.
  printf("value: %d\n", value);  // Print the value entered by the user.

  return 0;  // End of the main function and return 0 to indicate successful program execution.
}

void cleanup()  // Definition of the cleanup function.
{
  time(&end);  // Get the current time and store it in 'end'.
  double diff = difftime(end, start);  // Calculate the difference in time between 'end' and 'start'.
  printf("Execution time: %f\n", diff);  // Print the execution time.
}

