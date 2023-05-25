#include <stdio.h>  // Include the standard input/output library.
#include <string.h>  // Include the string library for string manipulation functions.

typedef struct  // Define a structure named Student.
{
  char type;  // Character representing the type of student.
  char name[50];  // Character array to store the name of the student.
  int age;  // Integer to store the age of the student.
  double average;  // Double to store the average score of the student.
} Student;

#define TOTAL_STUDENTS 3  // Define a constant for the total number of students.

int main(void)
{
  FILE *file;  // File pointer for file operations.

  file = fopen("file.csv", "w");  // Open the file "file.csv" in write mode.

  if (file == NULL)  // Check if the file opening was unsuccessful.
  {
    printf("Error opening file.\n");  // Print an error message.
    return 1;  // Return 1 to indicate an error.
  }

  Student students[TOTAL_STUDENTS];  // Declare an array of Student structures.

  // Initialize the first student's data.
  students[0].type = 'U';
  strcpy(students[0].name, "Konstantin");
  students[0].age = 20;
  students[0].average = 90;

  // Initialize the second student's data.
  students[1].type = 'U';
  strcpy(students[1].name, "Katerine");
  students[1].age = 19;
  students[1].average = 95;

  // Initialize the third student's data.
  students[2].type = 'G';
  strcpy(students[2].name, "Miron");
  students[2].age = 21;
  students[2].average = 85;

  for (int i = 0; i < TOTAL_STUDENTS; i++)  // Iterate over each student.
  {
    // Write the student's data to the file in CSV format.
    fprintf(file,
            "%c,%s,%d,%.2f\n",
            students[i].type,
            students[i].name,
            students[i].age,
            students[i].average);

    if (ferror(file))  // Check if there was an error while writing to the file.
    {
      printf("Error writing to file.\n");  // Print an error message.
      return 1;  // Return 1 to indicate an error.
    }
  }

  fclose(file);  // Close the file.

  printf("\n%d records written.\n\n", TOTAL_STUDENTS);  // Print the number of records written.

  return 0;  // End of the main function and return 0 to indicate successful program execution.
}

