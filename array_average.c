#include <stdio.h>  // Include the standard input/output library.

double avg(double array[], int length);  // Function declaration for the avg function.

int main(void)  // Start of the main function.
{

  double arr1[] = {5.2,9.3,6.5,4.1,7.8};  // Declare and initialize an array named 'arr1' with 5 double values.
  double arr2[] = {10.0};  // Declare and initialize an array named 'arr2' with 1 double value.
  double arr3[] = {9.8,9.6};  // Declare and initialize an array named 'arr3' with 2 double values.
  double arr4[] = {-50,50,-100,100,-2,2};  // Declare and initialize an array named 'arr4' with 6 double values.

  printf("arr1 avg: %.2lf\n", avg(arr1,5));  // Print the average of 'arr1' with 2 decimal places.
  printf("arr2 avg: %.2lf\n", avg(arr2,1));  // Print the average of 'arr2' with 2 decimal places.
  printf("arr3 avg: %.2lf\n", avg(arr3,2));  // Print the average of 'arr3' with 2 decimal places.
  printf("arr4 avg: %.2lf\n", avg(arr4,6));  // Print the average of 'arr4' with 2 decimal places.

  return 0;  // End of the main function and return 0 to indicate successful program execution.
}

double avg(double array[], int length)  // Start of the avg function.
{

  double sum = 0;  // Declare and initialize a variable named 'sum' to store the sum of all elements in 'array'.

  for (int i = 0; i < length; i++)  // Iterate through each element in 'array'.
  {
    sum = sum + array[i];  // Add the current element to 'sum'.
  }

  return sum / length;  // Calculate the average by dividing 'sum' by 'length' and return the result.
}

