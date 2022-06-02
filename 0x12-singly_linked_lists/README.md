# 0x12. C - Singly linked lists

This project involved learning of the use of linked lists, when and why using linked lists vs arrays, and how to build and use linked lists.
- [lists.h](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x12-singly_linked_lists/lists.h) - header file containing the function prototypes and data structure
- [test](https://github.com/jacobgbemi/alx-low_level_programming/tree/main/0x12-singly_linked_lists/test) - test folder containing the d files for code testing
- ### Data structure
``` /**
     * struct list_s - singly linked list
     * @str: string - (malloc'ed string)
     * @len: length of the string
     * @next: points to the next node
     *
     * Description: singly linked list node structure
     */
    typedef struct list_s
    {
        char *str;
        unsigned int len;
        struct list_s *next;
    } list_t;
  ```
## Tasks
### 0. Print list
- [0-print_list.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x12-singly_linked_lists/0-print_list.c) - a function that prints all the elements of a ```list_t``` list.
  - Prototype: ```size_t print_list(const list_t *h);```
  - Return: the number of nodes
  - If str is ```NULL```, print ```[0] (nil)```
  - You are allowed to use ```printf```

### 1. List length
- [1-list_len.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x12-singly_linked_lists/1-list_len.c) - a function that returns the number of elements in a linked ```list_t``` list

### 2. Add node
- [2-add_node.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x12-singly_linked_lists/2-add_node.c) - a function that adds a new node at the beginning of a ```list_t``` list.
  - Prototype: ```list_t *add_node(list_t **head, const char *str);```
  - Return: the address of the new element, or ```NULL``` if it failed
  - ```str``` needs to be duplicated
  - You are allowed to use ```strdup```
  - To compile program, run ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c```

### 3. Add node at the end
- [3-add_node_end.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x12-singly_linked_lists/3-add_node_end.c) -  a function that adds a new node at the end of a ```list_t``` list.
  - Prototype: ```list_t *add_node_end(list_t **head, const char *str);```
  - Return: the address of the new element, or ```NULL``` if it failed
  - ```str``` needs to be duplicated
  - You are allowed to use ```strdup```
  - To compile program, run ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o d```

### 4. Free list
- [4-free_list.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x12-singly_linked_lists/4-free_list.c) - a function that frees a ```list_t``` list.
  - To compile program, run ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e```

### 5. The Hare and the Tortoise
- [100-first.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x12-singly_linked_lists/100-first.c) - a function that prints ```You're beat! and yet, you must allow,\nI bore my house upon my back!\n``` before the ```main``` function is executed.
  - You are allowed to use the ```printf``` function

### 6. Real programmers can write assembly code in any language
- [101-hello_holberton.asm](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x12-singly_linked_lists/101-hello_holberton.asm) - a 64-bit program in assembly that prints ```Hello, Holberton```, followed by a new line
  - You are only allowed to use the ```printf``` function
  - You are not allowed to use interrupts
  - Your program will be compiled using ```nasm``` and ```gcc```:
  - To compile program, run ```nasm -f elf64 101-hello_holberton.asm && gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello```
