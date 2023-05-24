#include <stdio.h>  // Include the standard input/output library.

int main(void)  // Start of the main function.
{
  double radius = 0;  // Declare and initialize a double variable named 'radius' with a value of 0.

  printf("Enter radius: ");  // Print the prompt asking the user to enter the radius.

  scanf("%lf", &radius);  // Read a double value from the user and store it in 'radius'.

  double area = 3.141592 * radius * radius;  // Calculate the area of the circle using the formula 'pi * radius * radius' and store it in 'area'.

  printf("area: %f\n", area);  // Print the calculated area of the circle.

  return 0;  // End of the main function and return 0 to indicate successful program execution.
}

