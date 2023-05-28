#include <stdio.h>  // Include the standard input/output library.
#include <assert.h>  // Include the assertion library.
#include <stdlib.h>  // Include the standard library.
#include <string.h>  // Include the string library.

void print_string(char *s);  // Function prototype for 'print_string'.

int main(void)  // Start of the main function.
{

  char *string = malloc(sizeof(char) * 10);  // Allocate memory for a character array of size 10 and assign the address to 'string'.
  strcpy(string, "abc");  // Copy the string "abc" into the memory pointed to by 'string'.

  char *bad_string;  // Declare a pointer 'bad_string' without assigning it a value.

  print_string(bad_string);  // Call the 'print_string' function with the 'bad_string' argument.

  return 0;  // End of the main function and return 0 to indicate successful program execution.
}

void print_string(char *s)  // Start of the 'print_string' function.
{

  assert(s != NULL);  // Assert that the pointer 's' is not NULL.

  if (s == NULL)  // Check if 's' is NULL.
  {
    printf("Problem with program, let admin know!\n");  // Print an error message indicating a problem with the program.
    exit(1);  // Terminate the program with an exit code of 1.
  }

  printf("@@@%s@@@\n", s);  // Print the string 's' surrounded by "@@@".

}  // End of the 'print_string' function.

