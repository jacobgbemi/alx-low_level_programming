# 0x0E. C - Structures, typedef

In this project, I learned about structures in C, when and how to use them. I also learned the use of ```typedef```
[dog.h](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x0E-structures_typedef/dog.h) - header file containing all the function prototypes and date structures
[test](https://github.com/jacobgbemi/alx-low_level_programming/tree/main/0x0E-structures_typedef/test) - test folder containing the c files for testing codes

## Tasks
### 0. Poppy
- [dog.h](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x0E-structures_typedef/dog.h) - Define a new type struct dog with the following elements:
  - ```name```, type = ```char *```
  - ```ge```, type = ```float```
  - ```owner```, type = ```char *```

### 1. A dog is the only thing on earth that loves you more than you love yourself
- [1-init_dog.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x0E-structures_typedef/1-init_dog.c) -  a function that initialize a variable of type ```struct dog```

### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
- [2-print_dog.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x0E-structures_typedef/2-print_dog.c) - a function that prints a ```struct dog```
  - Prototype: ```void print_dog(struct dog *d);```
  - You are allowed to use the standard library
  - If an element of ```d``` is ```NULL```, print ```(nil)``` instead of this element. (if name is ```NULL```, print Name: ```(nil))```
  - If ```d``` is ```NULL``` print nothing.

### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
- [dog.h](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x0E-structures_typedef/dog.h) - a new type ```dog_t``` as a new name for the type ```struct dog```.

### 4. A door is what a dog is perpetually on the wrong side of
- [4-new_dog.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x0E-structures_typedef/4-new_dog.c) -  a function that creates a new dog.
  - Prototype: ```dog_t *new_dog(char *name, float age, char *owner);```
  - You have to store a copy of ```name``` and ```owner```
  - Return ```NULL``` if the function fails

### 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
- [5-free_dog.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/main/0x0E-structures_typedef/5-free_dog.c) - a function that frees dogs.
