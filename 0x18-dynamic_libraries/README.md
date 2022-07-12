# 0x18. C - Dynamic libraries

In this project, I learned the diffirence between static lirary and dynamic library. I also learned how to use ```nm``` and ```ldd```. By comparison, dynamic library conserve memory usage.

## Tasks

### 0. A library is not a luxury but one of the necessities of life
- [libdynamic.so](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libdynamic.so) - dynamic library ```libdynamic.so``` containing all the functions listed below:
  ```
  int _putchar(char c);
  int _islower(int c);
  int _isalpha(int c);
  int _abs(int n);
  int _isupper(int c);
  int _isdigit(int c);
  int _strlen(char *s);
  void _puts(char *s);
  char *_strcpy(char *dest, char *src);
  int _atoi(char *s);
  char *_strcat(char *dest, char *src);
  char *_strncat(char *dest, char *src, int n);
  char *_strncpy(char *dest, char *src, int n);
  int _strcmp(char *s1, char *s2);
  char *_memset(char *s, char b, unsigned int n);
  char *_memcpy(char *dest, char *src, unsigned int n);
  char *_strchr(char *s, char c);
  unsigned int _strspn(char *s, char *accept);
  char *_strpbrk(char *s, char *accept);
  char *_strstr(char *haystack, char *needle);
  ```
  ### Steps to Approach the tasks
  - Copy all the function prototypes above into your [main.h](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x18-dynamic_libraries/main.h) file.
  - Create a function for each prototypes or copy from your previous tasks.
  - Create the dynamic library
    - USe this command: ```gcc *.c -c -fPIC```
    - The ```-fPIC``` flag ensures that the code is position-independent.
    - The ```-c``` options just ensures that each ```.o``` file isn’t linked yet.
  - Put the name of the library in .so format
    - Use this command: gcc *.o -shared -o libdynamic.so
  - Export the path for the libraries so that programs know where to look for them by executing: 
    - ```export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH```
  - To use the library, compile your code as follows:
    - ```gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len```
    - The expression, ```-lcombined``` with dynamic tells the compiler to look for libdynamic.so
	  - The ```-L``` flag tells the compiler to look in the current directory for the library file.
  - To know the functions in a library, use the nm command:
    - Use this command: ```nm libdynamic.so```
  - To list the dependencies of a library, use the ldd command:
	  - USe this command: ```ldd libdynamic.so```
    
### 1. Without libraries what have we? We have no past and no future
- [1-create_dynamic_lib.sh](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x18-dynamic_libraries/1-create_dynamic_lib.sh) - a script that creates a dynamic library called ```liball.so``` from all the ```.c``` files that are in the current directory.
  
### 2. Let's call C functions from Python
- [100-operations.so](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x18-dynamic_libraries/100-operations.so) - a dynamic library that contains C functions that can be called from Python
  ### Steps to Approach the tasks
  - Create a [3-op_functions.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x18-dynamic_libraries/3-op_functions.c) file or copy form previous tasks containing the opearation functions 
  - USe this command: ```gcc 3-op_functions.c -c -fPIC```
  - Use this command: ```gcc *.o -shared -o 100-operations.so```
  - Check [100-tests.py](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x18-dynamic_libraries/100-tests.py) for the test file
  - Run python3 ```100-tests.py```` to test your code

### 3. Code injection: Win the Giga Millions!
- Still working on this code.
