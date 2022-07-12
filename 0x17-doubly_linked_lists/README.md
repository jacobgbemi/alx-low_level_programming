# 0x17. C - Doubly linked lists

In this project, I learned the use of doubly linked lists, and the difference between singly linked lists and doubly linked lists. In doubly linked lists, the next node store the address of the previous node and the previous node store the address of the next node.

- [lists.h](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/lists.h) - header file containing the function prototypes and data structure
- [test](https://github.com/jacobgbemi/alx-low_level_programming/tree/main/0x17-doubly_linked_lists/test) - test folder containing the d files for code testing

- ## Data Structure
   ```
   /**
   * struct dlistint_s - doubly linked list
   * @n: integer
   * @prev: points to the previous node
   * @next: points to the next node
   *
   * Description: doubly linked list node structure
   * 
   */
  typedef struct dlistint_s
  {
      int n;
      struct dlistint_s *prev;
      struct dlistint_s *next;
  } dlistint_t;
  ```
### 0. Print list
- [0-print_dlistint.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/0-print_dlistint.c) - a function that prints all the elements of a ```dlistint_t``` list.
  - Prototype: ```size_t print_dlistint(const dlistint_t *h);```
  - Return: the number of nodes
  - To compile: ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a```
  
### 1. List length
- [1-dlistint_len.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/1-dlistint_len.c) - a function that returns the number of elements in a linked ```dlistint_t``` list
  - Prototype: ```size_t dlistint_len(const dlistint_t *h);```
  - To compile: ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-dlistint_len.c -o b```
  
### 2. Add node
- [2-add_dnodeint.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/2-add_dnodeint.c) - a function that adds a new node at the beginning of a ```dlistint_t``` list
  - Prototype: ```dlistint_t *add_dnodeint(dlistint_t **head, const int n);```
  - Return: the address of the new element, or ```NULL``` if it failed
  - To compile: ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_dnodeint.c 0-print_dlistint.c -o c```
  
### 3. Add node at the end
- [3-add_dnodeint_end.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/3-add_dnodeint_end.c) - a function that adds a new node at the end of a ```dlistint_t``` list.
  - Prototype: ```dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);```
  - Return: the address of the new element, or ```NULL``` if it failed
  - To compile: ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_dnodeint_end.c 0-print_dlistint.c -o d```
  
### 4. Free list
- [4-free_dlistint.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/4-free_dlistint.c) - a function that frees a ```dlistint_t``` list.
  - Prototype: ```void free_dlistint(dlistint_t *head);```
  - To compile: ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o e```
  
### 5. Get node at index
- [5-get_dnodeint.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/5-get_dnodeint.c) - a function that returns the nth node of a ```dlistint_t``` linked list.
  - Prototype: ```dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);```
  - where ```index``` is the index of the node, starting from ```0```
  - if the node does not exist, return ```NULL```
  - To compile: ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 5-get_dnodeint.c -o h```
  
### 6. Sum list
- [6-sum_dlistint.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/6-sum_dlistint.c) - a function that returns the sum of all the data (n) of a ```dlistint_t``` linked list.
  - Prototype: ```int sum_dlistint(dlistint_t *head);```
  - if the list is empty, return ```0```
  - To compile: ```gcc -Wall -pedantic -Werror -Wextra 6-main.c -std=gnu89 3-add_dnodeint_end.c 4-free_dlistint.c 6-sum_dlistint.c -o i```
  
### 7. Insert at index
- [7-insert_dnodeint.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/7-insert_dnodeint.c) - a function that inserts a new node at a given position.
  - Prototype: ```dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);```
  - where ```idx``` is the index of the list where the new node should be added. Index starts at ```0```
  - Returns: the address of the new node, or ```NULL``` if it failed
  - if it is not possible to add the new node at index ```idx```, do not add the new node and return ```NULL```
  - To compile: ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 2-add_dnodeint.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 7-insert_dnodeint.c -o j```
  
### 8. Delete at index
- [8-delete_dnodeint.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/8-delete_dnodeint.c) - a function that deletes the node at index ```index``` of a ```dlistint_t linked``` list.
  - Prototype: ```int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);```
  - where ```index``` is the index of the node that should be deleted. Index starts at ```0```
  - Returns: ```1``` if it succeeded, ```-1``` if it failed
  - To compile: ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 8-delete_dnodeint.c -o k```
  
### 9. Crackme4
- [100-password](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/100-password) - the password for [crackme4](https://github.com/holbertonschool/0x17.c).
  - Steps to get the password
    1. Install [uncompyle6](https://pypi.org/project/uncompyle6/): 
      ```
      pip install uncompyle6
      ```
    2. Clone the ```crackme4``` repo: 
      ```
      git clone https://github.com/holbertonschool/0x17.c.git
      ```
    3. Change the filename, ```crackme4``` to ```crackme4.pyc```
    4. Decompile ```crackme4.pyc```: 
      ```
      uncompyle6 crackme4.pyc
      ```
    5. Read the output:
      ```
      pwd = input('Password: ')
      ok = 'Zen of Python'
      ok = ok + ' C'
      ok = ok[1:3] + ok[3] + ok[14] + ok[3] + ok[7:9] + ok[:6][::-1] 
      if pwd == ok:
          print('OK')
      else: 
          print('KO') 
      ```
    6. Interprete ```ok``` to get ```en C Pyfon neZ```
    
### 10. Palindromes
- [102-result](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/102-result) - the largest palindrome made from the product of two 3-digit numbers.
  - [102-palindrome_three_digits.py](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/102-palindrome_three_digits.py) - Python code to get this result for 3-digit numbers, and [102-palindrome_two_digits.py](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/102-palindrome_two_digits.py) for 2-digit numbers
  - [102-palindrome_three_digits.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/102-palindrome_three_digits.c) - C program to get this result
  
### 11. crackme5
- [103-keygen.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/103-keygen.c) - a keygen for [crackme5](https://github.com/holbertonschool/0x17.c).
  - Usage of the crackme: ```./crackme5 username key```
  - The crackme will segfault if you do not enter the correct key for the user
  - Usage for your keygen: ```./keygen5 username```
  - Your keygen should print a valid key for the ```username```
  - To compile: ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-keygen.c -o keygen5```
  - To confirm it works: ```./crackme5 julien `./keygen5 julien```
