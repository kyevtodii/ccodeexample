#include <stdio.h>  // Include the standard input/output library.

int main(void)  // Start of the main function.
{

  int grade[] = {91, 82, 73, 64, 55};  // Declare and initialize an integer array named 'grade' with 5 values.

  for (int i = 0; i < 5; i++)  // Start of a loop that iterates from 0 to 4.
    printf("grade[%d] = %d\n", i, grade[i]);  // Print the value of 'grade[i]' along with the index 'i'.

  int total = 0;  // Declare and initialize a variable named 'total' to store the sum of all grades.

  for (int i = 0; i < 5; i++)  // Start of a loop that iterates from 0 to 4.
    total = total + grade[i];  // Add the current grade to the 'total' variable.

  int average = total / 5;  // Calculate the average by dividing 'total' by 5 and store it in the 'average' variable.

  printf("average: %d\n", average);  // Print the value of 'average'.

  return 0;  // End of the main function and return 0 to indicate successful program execution.
}

