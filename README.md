# csv-parser
This simple library is made for parsing strings with delimiters and has other functions to help with the same.

## Functions
- char** winparse(char* str, char lim, int n);<br>
The main function, `winparse()` can accept any character as a delimiter and number of fields in the string can be passed along either by the user or calculated with the function given below. The function is made without the use of string.h to minimize dependency on other header files. Since the function returns a pointer, make sure to free the memory allocated in function using calloc with the `free()` function.<br>
Usage: `winparse((string to parse), (delimiter character), (number of fields))` returns a 2D char array.
---
- int num_fields(char* line, char lim);
A simple function which takes a string and a delimiter and counts the number of instances of that character in the string, returning (n+1) as number of fields where n is number of instances.<br>
Usage: `num_fields((line to parse), (delimiter character))` returns an integer.
