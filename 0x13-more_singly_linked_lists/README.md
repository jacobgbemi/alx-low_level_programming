# 0x13. C - More singly linked lists

I this project, I perform further tasks on the use of single link lists.
- [lists.h](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/lists.h) - header file containing the function prototypes
- [test](https://github.com/jacobgbemi/alx-low_level_programming/tree/main/0x13-more_singly_linked_lists/test) - test folder containing the c files for code testing

## Tasks
### 0. Print list
- [0-print_listint.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/0-print_listint.c) - a function that prints all the elements of a ```listint_t``` list.

###  1. List length
- [1-listint_len.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/1-listint_len.c) - a function that returns the number of elements in a linked ```listint_t``` list.

###  2. Add node
- [2-add_nodeint.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/2-add_nodeint.c) - a function that adds a new node at the beginning of a ```listint_t``` list.

###  3. Add node at the end
- [3-add_nodeint_end.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/3-add_nodeint_end.c) - a function that adds a new node at the end of a ```listint_t``` list.

###  4. Free list
- [4-free_listint.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/4-free_listint.c) - a function that frees a ```listint_t``` list.

###  5. Free
- [5-free_listint2.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/5-free_listint2.c) - a function that frees a ```listint_t``` list.

###  6. Pop
- [6-pop_listint.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/6-pop_listint.c) - a function that deletes the head node of a ```listint_t``` linked list, and returns the head node’s data (n).

###  7. Get node at index
- [7-get_nodeint.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/7-get_nodeint.c) - a function that returns the nth node of a ```listint_t``` linked list.

###  8. Sum list
- [8-sum_listint.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/8-sum_listint.c) -  a function that returns the sum of all the data (n) of a ```listint_t``` linked list

###  9. Insert
- [9-insert_nodeint.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/9-insert_nodeint.c) - a function that inserts a new node at a given position.
  - Prototype: ```listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);```
  - where ```idx``` is the index of the list where the new node should be added. Index starts at ```0```
  - Returns: the address of the new node, or ```NULL``` if it failed
  - if it is not possible to add the new node at index ```idx```, do not add the new node and return ```NULL```

###  10. Delete at index
- [10-delete_nodeint.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/10-delete_nodeint.c) - a function that deletes the node at index ```index``` of a ```listint_t``` linked list.
  - Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
  - where ```index``` is the index of the node that should be deleted. Index starts at ```0```
  - Returns: ```1``` if it succeeded, ```-1``` if it failed

###  11. Reverse list
- [100-reverse_listint.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/100-reverse_listint.c) -  a function that reverses a ```listint_t``` linked list.
  - Prototype: ```listint_t *reverse_listint(listint_t **head);```
  - Returns: a pointer to the first node of the reversed list
  - You are not allowed to use more than ```1``` loop.
  - You are not allowed to use ```malloc```, ```free```` or arrays
  - You can only declare a maximum of two variables in your function

###  12. Print (safe version)
- [101-print_listint_safe.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/101-print_listint_safe.c) - a function that prints a ```listint_t``` linked list.
  - Prototype: ```size_t print_listint_safe(const listint_t *head);```
  - Returns: the number of nodes in the list
  - This function can print lists with a loop
  - You should go through the list only once
  - If the function fails, exit the program with status ```98```

###  13. Free (safe version)
- [102-free_listint_safe.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/102-free_listint_safe.c) - a function that frees a ```listint_t``` list.
  - Prototype: ```size_t free_listint_safe(listint_t **h);```
  - This function can free lists with a loop
  - You should go though the list only once
  - Returns: the size of the list that was free’d
  - The function sets the ```head``` to ```NULL```

###  14. Find the loop
- [103-find_loop.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/103-find_loop.c) - a function that finds the loop in a linked list.
  - Prototype: ```listint_t *find_listint_loop(listint_t *head);```
  - Returns: The address of the node where the loop starts, or NULL if there is no loop
  - You are not allowed to use ```malloc```, ```free``` or arrays
  - You can only declare a maximum of two variables in your function
