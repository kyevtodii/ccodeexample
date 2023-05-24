#include <stdio.h>  // Include the standard input/output library.
#include <stdbool.h>  // Include the boolean library.
#include <string.h>  // Include the string library.
#include <ctype.h>  // Include the character type library.

bool check_anagram(char *w1, char *w2);  // Function prototype for 'check_anagram'.

int main()  // Start of the main function.
{

  char w1[] = "Listen";  // Declare and initialize a character array 'w1' with the string "Listen".
  char w2[] = "Silent";  // Declare and initialize a character array 'w2' with the string "Silent".

  if (check_anagram(w1, w2))  // Call the 'check_anagram' function with 'w1' and 'w2' as arguments. If it returns true, execute the if block.
    printf("Anagrams!\n");  // Print "Anagrams!" indicating that the two words are anagrams.
  else 
    printf("Not anagrams!\n");  // Print "Not anagrams!" indicating that the two words are not anagrams.

  return 0;  // End of the main function and return 0 to indicate successful program execution.
}

bool check_anagram(char *w1, char *w2)  // Start of the 'check_anagram' function that takes two character pointers as arguments and returns a boolean value.
{
  int len1 = strlen(w1);  // Calculate the length of the string 'w1' and store it in 'len1'.
  int len2 = strlen(w2);  // Calculate the length of the string 'w2' and store it in 'len2'.

  int w1lc[26] = {0};  // Declare and initialize an integer array 'w1lc' of size 26 with all elements set to 0.
  int w2lc[26] = {0};  // Declare and initialize an integer array 'w2lc' of size 26 with all elements set to 0.

  for (int i = 0; i < len1; i++)  // Start of the 'for' loop to iterate from 0 to 'len1'.
  { 
    int lower = tolower(w1[i]);  // Convert the character at index 'i' of 'w1' to lowercase and store it in 'lower'.
    w1lc[ lower - 'a' ]++;  // Increment the element at index 'lower - 'a'' in 'w1lc'.
  }

  for (int i = 0; i < len2; i++)  // Start of the 'for' loop to iterate from 0 to 'len2'.
  { 
    int lower = tolower(w2[i]);  // Convert the character at index 'i' of 'w2' to lowercase and store it in 'lower'.
    w2lc[ lower - 'a' ]++;  // Increment the element at index 'lower - 'a'' in 'w2lc'.
  }

  for (int i = 0; i < 26; i++)  // Start of the 'for' loop to iterate from 0 to 25.
    if (w1lc[i] != w2lc[i]) return false;  // If the elements at the corresponding indices in 'w1lc' and 'w2lc' are not equal, return false.

  return true;  // If all elements in 'w1lc' and 'w2lc' are equal, return true
}

