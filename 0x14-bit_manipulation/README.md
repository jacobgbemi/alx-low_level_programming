# 0x14. C - Bit manipulation
In this project, I learned the concept of bit manipulator using bitwise operators, ```^```, ```|```, ```&```, ```<<```, ```>>```, and ```~```.
- [main.h](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x14-bit_manipulation/main.h) - header file containing all the function prototypes
- [test](https://github.com/jacobgbemi/alx-low_level_programming/tree/main/0x14-bit_manipulation/test) - test folder containing the c files for testing codes
- [_putchar.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x14-bit_manipulation/_putchar.c) - a function to print ```char``` to ```stdout```

## Tasks
### 0. 0
- [0-binary_to_uint.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x14-bit_manipulation/0-binary_to_uint.c) - a function that converts a binary number to an ```unsigned int```.
  - Prototype: ```unsigned int binary_to_uint(const char *b);```
  - where ```b``` is pointing to a string of ```0``` and ```1``` chars
  - Return: the converted number, or ```0``` if
  - there is one or more chars in the string ```b``` that is not ```0``` or ```1```
  - ```b``` is ```NULL```

### 1. 1
- [1-print_binary.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x14-bit_manipulation/1-print_binary.c) - a function that prints the binary representation of a number.
  - Prototype: ```void print_binary(unsigned long int n);```
  - Format: see example
  - You are not allowed to use arrays
  - You are not allowed to use ```malloc```
  - You are not allowed to use the ```%``` or ```/``` operators

### 2. 10
- [2-get_bit.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x14-bit_manipulation/2-get_bit.c) - a function that returns the value of a bit at a given index.
  - Prototype: ```int get_bit(unsigned long int n, unsigned int index);```
  - where index is the ```index```, starting from ```0``` of the bit you want to get
  - Returns: the value of the bit at index ```index``` or ```-1``` if an error occured

### 3. 11
- [3-set_bit.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x14-bit_manipulation/3-set_bit.c) - a function that sets the value of a bit to ```1``` at a given index.
  - Prototype: ```int set_bit(unsigned long int *n, unsigned int index);```
  - where index is the ```index```, starting from ```0``` of the bit you want to set
  - Returns: ```1``` if it worked, or ```-1``` if an error occurred

### 4. 100
- [4-clear_bit.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x14-bit_manipulation/4-clear_bit.c) - a function that sets the value of a bit to ```0``` at a given index.
  - Prototype: ```int clear_bit(unsigned long int *n, unsigned int index);```
  - where ```index``` is the index, starting from ```0``` of the bit you want to set
  - Returns: ```1``` if it worked, or ```-1``` if an error occurred

### 5. 101
- [5-flip_bits.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x14-bit_manipulation/5-flip_bits.c) - a function that returns the number of bits you would need to flip to get from one number to another.
  - Prototype: ```unsigned int flip_bits(unsigned long int n, unsigned long int m);```
  - You are not allowed to use the ```%``` or ```/``` operators

### 6. Endianness
- [100-get_endianness.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x14-bit_manipulation/100-get_endianness.c) - a function that checks the endianness.
  - Prototype: ```int get_endianness(void);```
  - Returns: ```0``` if big endian, ```1``` if little endian

### 7. Crackme3
- [101-password](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x14-bit_manipulation/101-password) - contains the password for this [program](https://github.com/holbertonschool/0x13.c).
  - contain the exact password, no new line, no extra space
  - ### Steps to get the password
  - 1. $ gdb ./crackme3
  - 2. gdb> disassemble main
  - 3. gdb> info functions
    - note the two functions created by user ```check_password``` & ```main```
  - 4. gdb> disassemble main
    - gdb> break *main
  - 5. gdb> run
    - gdb> ni
    - press enter key until ```crackme3 password``` is displayed
  - 6. gdb> run password
    - type ```y``` and press enter key
  - 7. gdb> ni
    - press enter key until memory segment ending in ```6c7``` is displayed
  - 8. gdb> x/xw $rbp-0x4
    - note the memory address ```0x7fffffffe32c``` set to 0
  - 9. gdb> set {int}0x7fffffffe32c=0x1
  - 10. gdb> x/xw $rbp-0x4
    - note the memory address "0x7fffffffe32c" now set to 1
  - 11. gdb> ni
    - press enter key until message ```congratulations``` is displayed
    - note the memory segment
    - type ```q``` and press enter key to quit
  - 12. gdb> disassemble main
    - gdb> break *main
    - gdb> run password
    - type ```y``` and press enter key
  - 13. gdb> ni
    - press enter key until memory segment ending in ```6bf``` is displayed
  - 14. gdb> si
    - note the display
  - 15. gdb> disassemble check_password
    - note the display
  - 16. gdb> ni
    - press enter key until memory segment ending in ```60e``` is displayed
    - if nothing is displayed (note the hint from cmp flag, it says strlen = 4)
    - press enter key until memory segment ending in ```614``` is displayed
  - 17. gdb> run pass
    - type ```y``` and press enter key
  - 18. gdb> ni
    - press enter key until memory segment ending in ```6bf``` is displayed
  - 19. gdb> si
    - gdb> disassemble check_password
  - 20. gdb> ni
    - press enter key until memory segment ending in ```61b``` is displayed
  - 21. gdb> gdb> x/xw $rbp-0x4
    - note the memory address ```0x7fffffffe2fc``` set to 0
  - 22. gdb> x/xs 0x7fffffffe2fc
  - 23. gdb> x/xs $rbp-0x4
    - note the display, same as above
  - 24. gdb> ni
    - press enter key until memory segment ending in ```626``` is displayed
  - 25. gdb> x/xs $rbp-0x4
    - note the display,
  - 26. check man page for ascii
    - $ ```man ascii```
    - break the hex ```0x046c6f48``` into ```0x``` ```04``` ```6c``` ```6f``` ```48``` because 'DWORD PTR' was used, not DBYTE PTR
    - then interprete from ```right``` to ```left```
  - 27. After interpretation, the ```04``` is intrepreted as ```EOT```, which means ```^D```
  - 28. Finally, to type ```^D``` in vim, do ```ctrl v``` ```ctrl d```.
   
