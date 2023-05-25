#include <stdio.h>  // Include the standard input/output library.

void add(int x);  // Function declaration for add().

void array_add(int array[]);  // Function declaration for array_add().

void array_add_ptr(int *array);  // Function declaration for array_add_ptr().

int main(void)
{

  int a = 5;  // Declare and initialize variable 'a' with the value 5.

  add(a);  // Call the function add() with the value of 'a' as an argument.

  printf("a: %d\n", a);  // Print the value of 'a'.

  int myarray[5] = {1,2,3,4,5};  // Declare and initialize an integer array 'myarray'.

  array_add_ptr(myarray);  // Call the function array_add_ptr() with 'myarray' as an argument.

  printf("myarray[0]: %d\n", myarray[0]);  // Print the value of the first element of 'myarray'.

  printf("myarray: %p\n", myarray);  // Print the memory address of 'myarray'.

  return 0;  // End of the main function and return 0 to indicate successful program execution.
}

void add(int x)
{
  printf("x: %d\n", x);  // Print the value of 'x'.
  x = x + 1;  // Increment the value of 'x' by 1 (not affecting the original value of 'a' in the main function).
}

void array_add(int array[])
{
  printf("array: %p\n", array);  // Print the memory address of 'array'.

  array[0] = array[0] + 1;  // Increment the value of the first element of 'array' by 1.
}

void array_add_ptr(int *array)
{
  printf("array: %p\n", array);  // Print the memory address of 'array'.
  array[0] = array[0] + 1;  // Increment the value of the first element of 'array' by 1.
}




