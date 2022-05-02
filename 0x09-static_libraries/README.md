# 0x09. C - Static libraries

In this project, I learned the use of static library in C, and the difference betwween static and dynamic libraries. Basically, I learned the use of ```ar```, ```ranlib``` and ```nm``` commands.

## Tasks

### 0. A library is not a luxury but one of the necessities of life
- [libmy.a](https://github.com/jacobgbemi/alx-low_level_programming/blob/master/0x09-static_libraries/libmy.a) - a static library containing all the functions listed in [main.h](https://github.com/jacobgbemi/alx-low_level_programming/blob/master/0x09-static_libraries/main.h)
  - To compile your c-files into object files, do: ```gcc -Wall -Werror -Wextra -pedantic -c *.c```
  - To create the static library (```libmy.a```) and stored the object files in it, do: ```ar -cr libmy.a *.o```
  - To see the object files stored in ```libmy.a```, do: ```ar -t libmy.a```  
  - To see the symbols used in the library, do: ``` nm libmy.a```
  - To create an executable file, [quote](https://github.com/jacobgbemi/alx-low_level_programming/blob/master/0x09-static_libraries/quote) from [main.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/master/0x09-static_libraries/main.c) using the library, ```libmy.c```, do: ```gcc -std=gnu89 main.c -L. -lmy -o quote```

### 1. Without libraries what have we? We have no past and no future
- [create_static_lib.sh](https://github.com/jacobgbemi/alx-low_level_programming/blob/master/0x09-static_libraries/create_static_lib.sh) - a script that creates a static library called liball.a from all the ```.c``` files that are in the current directory.
