#include <stdio.h>  // Include the standard input/output library.
#include <stdlib.h>  // Include the standard library.

typedef struct {  // Define a structure type named 'Point'.
  int x;
  int y;
} Point;

int main(void)  // Start of the main function.
{

  Point p1;  // Declare a variable 'p1' of type 'Point'.

  p1.x = 3;  // Assign the value 3 to the member 'x' of 'p1'.
  p1.y = 2;  // Assign the value 2 to the member 'y' of 'p1'.

  printf("p1: (%d,%d)\n", p1.x, p1.y);  // Print the values of 'p1.x' and 'p1.y'.

  Point *p2;  // Declare a pointer 'p2' to a 'Point' structure.

  p2 = &p1;  // Assign the address of 'p1' to 'p2'.

  p2->x = 5;  // Update the value of 'x' using the pointer 'p2'.
  p2->y = 4;  // Update the value of 'y' using the pointer 'p2'.

  printf("p1: (%d,%d)\n", p1.x, p1.y);  // Print the updated values of 'p1.x' and 'p1.y'.
  printf("p2: (%d,%d)\n", p2->x, p2->y);  // Print the values of 'p2->x' and 'p2->y'.

  Point *p3;  // Declare a pointer 'p3' to a 'Point' structure.
  p3 = malloc(sizeof(Point));  // Allocate memory for a 'Point' structure and assign the address to 'p3'.

  p3->x = 5;  // Update the value of 'x' using the pointer 'p3'.
  p3->y = 10;  // Update the value of 'y' using the pointer 'p3'.

  printf("p3: (%d,%d)\n", p3->x, p3->y);  // Print the values of 'p3->x' and 'p3->y'.

  (*p3).x = 2;  // Update the value of 'x' using the dereferenced pointer 'p3'.
  (*p3).y = 4;  // Update the value of 'y' using the dereferenced pointer 'p3'.

  printf("p3: (%d,%d)\n", (*p3).x, (*p3).y);  // Print the values of '(*p3).x' and '(*p3).y'.

  return 0;  // End of the main function and return 0 to indicate successful program execution.
}

