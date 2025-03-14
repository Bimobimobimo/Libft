# Libft

## Description
Libft is a custom C library that reimplements a set of standard C functions as well as some additional utility functions. This project aims to deepen the understanding of C programming, memory management, and function implementation.

## Functions Included

### Standard Library Functions
- `toupper` - Converts a lowercase letter to uppercase.
- `tolower` - Converts an uppercase letter to lowercase.
- `strchr` - Locates the first occurrence of a character in a string.
- `strrchr` - Locates the last occurrence of a character in a string.
- `strncmp` - Compares two strings up to a given number of characters.
- `memchr` - Scans a memory area for a specific byte.
- `memcmp` - Compares two memory areas.
- `strnstr` - Locates a substring in a string, searching up to a specific length.
- `atoi` - Converts a string to an integer.
- `isalpha` - Checks if a character is an alphabetic letter.
- `isdigit` - Checks if a character is a digit (0-9).
- `isalnum` - Checks if a character is alphanumeric.
- `isascii` - Checks if a character is an ASCII character.
- `isprint` - Checks if a character is printable.
- `strlen` - Computes the length of a string.
- `memset` - Fills a memory area with a specific byte.
- `bzero` - Sets a memory area to zero.
- `memcpy` - Copies memory from one location to another.
- `memmove` - Copies memory, handling overlapping regions safely.
- `strlcpy` - Copies a string with a size limit, ensuring null-termination.
- `strlcat` - Concatenates two strings with a size limit, ensuring null-termination.
- `calloc` - Allocates memory and initializes it to zero.
- `strdup` - Duplicates a string, allocating new memory.

### Additional Utility Functions
- `ft_substr` - Extracts a substring from a string.
- `ft_strjoin` - Concatenates two strings into a new string.
- `ft_strtrim` - Removes specified characters from the beginning and end of a string.
- `ft_split` - Splits a string into an array of substrings based on a delimiter.
- `ft_itoa` - Converts an integer to a string.
- `ft_strmapi` - Applies a function to each character of a string, creating a new string.
- `ft_striteri` - Applies a function to each character of a string in-place.
- `ft_putchar_fd` - Writes a character to a given file descriptor.
- `ft_putstr_fd` - Writes a string to a given file descriptor.
- `ft_putendl_fd` - Writes a string followed by a newline to a given file descriptor.
- `ft_putnbr_fd` - Writes an integer to a given file descriptor.

## Installation
To use this library, clone the repository and compile it using Makefile:
```sh
make
```
This will generate a `libft.a` file, which can be linked to your projects.

## Usage
Include the header file in your C program:
```c
#include "libft.h"
```
Then, compile your project with `libft.a`, for example:
```sh
gcc my_program.c -L. -lft -o my_program
```


