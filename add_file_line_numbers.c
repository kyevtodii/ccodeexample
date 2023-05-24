#include <stdio.h>  // Include the standard input/output library.
#include <string.h>  // Include the string library.

#define FILENAME_SIZE 1024  // Define a macro named FILENAME_SIZE with a value of 1024.
#define MAX_LINE 2048  // Define a macro named MAX_LINE with a value of 2048.

int main(int argc, char *argv[])  // Start of the main function with command line arguments.
{

  FILE *file, *temp;  // Declare two file pointers, 'file' and 'temp'.

  char *filename;  // Declare a pointer to a character array named 'filename'.

  char temp_filename[FILENAME_SIZE];  // Declare a character array named 'temp_filename' with size 'FILENAME_SIZE'.

  char buffer[MAX_LINE];  // Declare a character array named 'buffer' with size 'MAX_LINE'.

  if (argc != 2)  // Check if the number of command line arguments is not equal to 2.
  {
    printf("Argument missing.\n");  // Print an error message indicating a missing argument.
    return 1;  // Return 1 to indicate an error.
  }

  else filename = argv[1];  // Assign the second command line argument to the 'filename' pointer.

  strcpy(temp_filename, "temp____");  // Copy the string "temp____" to the 'temp_filename' array.
  strcat(temp_filename, filename);  // Concatenate the 'filename' string to the end of 'temp_filename'.

  file = fopen(filename, "r");  // Open the file with the 'filename' in read mode and assign the file pointer to 'file'.
  temp = fopen(temp_filename, "w");  // Open the file with the 'temp_filename' in write mode and assign the file pointer to 'temp'.

  if (file == NULL || temp == NULL)  // Check if either 'file' or 'temp' is NULL, indicating an error opening the files.
  {
    printf("Error opening file.\n");  // Print an error message indicating an error opening the file.
    return 1;  // Return 1 to indicate an error.
  }

  int current_line = 1;  // Declare an integer variable 'current_line' and initialize it to 1.

  while (fgets(buffer, MAX_LINE, file) != NULL)  // Read a line from 'file' and store it in 'buffer'. Continue the loop until there are no more lines.
  {

    fprintf(temp, "%d %s", current_line, buffer);  // Write the line number and the line content to 'temp' file.

    current_line++;  // Increment the 'current_line' variable.
  }

  fclose(temp);  // Close the 'temp' file.
  fclose(file);  // Close the 'file' file.

  remove(filename);  // Remove the original file with 'filename'.
  rename(temp_filename, filename);  // Rename 'temp_filename' to 'filename'.

  return 0;  // End of the main function and return 0 to indicate successful program execution.
}

