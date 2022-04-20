# 0x03. C - Debugging
In this project, I learned how to manually debug a C program, and the [step by step process](https://u.osu.edu/cstutorials/2018/09/28/how-to-debug-c-program-using-gdb-in-6-simple-steps/) of using [gdb](https://www.onlinegdb.com/). I further applied funtion protoype concept by placing my functions in [main.h](https://github.com/jacobgbemi/alx-low_level_programming/blob/master/0x03-debugging/main.h)

### 0. Multiple mains
- [0-main.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/master/0x03-debugging/0-main.c) -  a C program to test that the function ```positive_or_negative()``` gives the correct output when given a case of 0.
  - use this [0-positive_or_negative](https://github.com/jacobgbemi/alx-low_level_programming/blob/master/0x01-variables_if_else_while/0-positive_or_negative) to confirm it works.

### 1. Like, comment, subscribe
- [1-main.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/master/0x03-debugging/1-main.c) - Comment out the part of the code that is causing the output of the ```code below``` to go into an infinite loop.
  -
    ```
      #include <stdio.h>

    /**
    * main - causes an infinite loop
    * Return: 0
    */

    int main(void)
    {
            int i;

            printf("Infinite loop incoming :(\n");

            i = 0;

            while (i < 10)
            {
                    putchar(i);
            }

            printf("Infinite loop avoided! \\o/\n");

            return (0);
    }
    ```

### 2. 0 > 972?
- [2-largest_number.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/master/0x03-debugging/2-largest_number.c) - fixed errors in the C program prints the largest of three integers
  - 
    ```
    #include "main.h"

    /**
     * largest_number - returns the largest of 3 numbers
     * @a: first integer
     * @b: second integer
     * @c: third integer
     * Return: largest number
     */

    int largest_number(int a, int b, int c)
    {
        int largest;

        if (a > b && b > c)
        {
            largest = a;
        }
        else if (b > a && a > c)
        {
            largest = b;
        }
        else
        {
            largest = c;
        }

        return (largest);
    }
    ```

### 3. Leap year
- [3-print_remaining_days.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/master/0x03-debugging/3-print_remaining_days.c) - debugged the function below so that the output works correctly for all dates and all leap years
  - 
    ```
    #include <stdio.h>
    #include "main.h"

    /**
    * print_remaining_days - takes a date and prints how many days are
    * left in the year, taking leap years into account
    * @month: month in number format
    * @day: day of month
    * @year: year
    * Return: void
    */

    void print_remaining_days(int month, int day, int year)
    {
        if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
        {
            if (month >= 2 && day >= 60)
            {
                day++;
            }

            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 366 - day);
        }
        else
        {
            if (month == 2 && day == 60)
            {
                printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
            }
            else
            {
                printf("Day of the year: %d\n", day);
                printf("Remaining days: %d\n", 365 - day);
            }
        }
    }

    ```
   - use the [3-main_a.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/master/0x03-debugging/3-main-a.c), [3-main_b.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/master/0x03-debugging/3-main-b.c) and [3-convert_day.c](https://github.com/jacobgbemi/alx-low_level_programming/blob/master/0x03-debugging/3-convert_day.c) to confirm your code works

