#include <stdio.h>  // Include the standard input/output library.
#include <string.h>  // Include the string library.
#include <stdbool.h>  // Include the library for boolean data type.

#define MAX_LINE 1024  // Define a macro named MAX_LINE with a value of 1024.

int main()  // Start of the main function.
{
  FILE *file;  // Declare a file pointer named 'file'.
  char buffer[MAX_LINE];  // Declare a character array named 'buffer' with size 'MAX_LINE'.

  file = fopen("file.txt", "a");  // Open the file "file.txt" in append mode and assign the file pointer to 'file'.

  if (file == NULL)  // Check if the file pointer is NULL, indicating an error opening the file.
  {
    printf("Error opening file.\n");  // Print an error message indicating an error opening the file.
    return 1;  // Return 1 to indicate an error.
  }

  printf("Enter 'quit' to exit.\n");  // Print a message instructing the user to enter 'quit' to exit.
  
  do  // Start of the do-while loop.
  {
    fgets(buffer, MAX_LINE, stdin);  // Read a line of input from the user and store it in 'buffer'.

    if (strcmp(buffer, "quit\n") == 0)  // Check if the input in 'buffer' is "quit\n", indicating the user wants to quit.
      break;  // Exit the do-while loop.

    fputs(buffer, file);  // Write the contents of 'buffer' to the 'file'.

  } while (true);  // The loop continues indefinitely until the break statement is encountered.

  fclose(file);  // Close the 'file'.

  return 0;  // End of the main function and return 0 to indicate successful program execution.
}

