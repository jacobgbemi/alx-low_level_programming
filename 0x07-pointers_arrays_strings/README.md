# 0x07 - Even more pointers, arrays and strings

## Tasks

### 0. memset
- [0-memset.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x07-pointers_arrays_strings/0-memset.c) - a function that fills memory with a constant byte.

### 1. memcpy
- [1-memcpy.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x07-pointers_arrays_strings/1-memcpy.c) - a function that copies memory area.

### 2. strchr
- [2-strchr.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x07-pointers_arrays_strings/2-strchr.c) - a function that locates a character in a string.

### 3. strspn
- [3-strspn.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x07-pointers_arrays_strings/3-strspn.c) - a function that gets the length of a prefix substring.

### 4. strpbrk
- [4-strpbrk.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x07-pointers_arrays_strings/4-strpbrk.c) - a function that searches a string for any of a set of bytes.

### 5. strstr
- [5-strstr.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x07-pointers_arrays_strings/5-strstr.c) - a function that locates a substring.

### 6. Chess is mental torture
- [7-print_chessboard.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x07-pointers_arrays_strings/7-print_chessboard.c) - a function that prints the chessboard.

### 7. The line of life is a ragged diagonal between duty and desire
- [8-print_diagsums.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x07-pointers_arrays_strings/8-print_diagsums.c) - a function that prints the sum of the two diagonals of a square matrix of integers.

### 8. Double pointer, double fun
- [100-set_string.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x07-pointers_arrays_strings/100-set_string.c) - a function that sets the value of a pointer to a char.

###  My primary goal of hacking was the intellectual curiosity, the seduction of adventure
- [101-crackme_password](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x07-pointers_arrays_strings/101-crackme_password) - a file that contains the password for the [crackme2](https://github.com/holbertonschool/0x06.c) executable.
  - ### Steps to Get the Password
    - 1. Clone the file - [crackme2](https://github.com/holbertonschool/0x06.c)
    - 2. Install openssl, 
          - Type the command: ```sudo apt install libssl-dev```
    - 3. Edit the source list
          - Type the command: ```sudo nano /etc/apt/sources.list```
          - Add this to the file: ```deb http://security.ubuntu.com/ubuntu xenial-security main```
          - Exit nano
          - Type the command: ```sudo apt update```
          - Type the command: ```sudo apt install libssl1.0.0```
    - 4. In the 0x06.c directory
          - First run the file: $ ```./crackme2```
          - Note the response
    - 5. Test the file type
          - Do: $ ```file crackme2```
          - Note the response
    - 6. Do ltrace on your terminal
          - Do: $ ```ltrace ./crackme2```
          - Note the last strings like this: strncmp("_=/usr/bin/ltrace", "jennieandjayloveasm=", 20) = -11
          - Copy this string: ```jennieandjayloveasm```
    - 7. Do this next on your terminal
          - $ ```export jennieandjayloveasm=hey```
          - ```ltrace ./crackme2```
          - Note the response: strcmp("d8578edf8458ce06fbc5bb76a58c5ca4"…, "6057f13c496ecf7fd777ceb9e79ae285"…) = 46
          - Copy the md5 hash: ```d8578edf8458ce06fbc5bb76a58c5ca4```
    - 8. Go to this website to convert the md5 hash to string: [md5 site](http://md5.gromweb.com/?md5=d8578edf8458ce06fbc5bb76a58c5ca4)
          - the result is the passord.
    - 9. Now enter the following command your terminal
          - ```echo -n 'password' > 101-crackme_password```
          - ```chmod u+x 101-crackme_password```
    - 10. Push to your github
          -  And wala
