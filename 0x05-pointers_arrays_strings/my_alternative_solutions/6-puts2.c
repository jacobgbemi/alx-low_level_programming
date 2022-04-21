#include<stdio.h>

void puts2(char *str);

int main(void)
{
    char * str;
    str = "0123456789";
    puts2(str);
    return 0;
}

void puts2(char *str)
{
    int i, j = 0;
    
    while (str[i])
        i++;
    for (j = 0; j < i; j += 2)
        putchar(str[j]);
    putchar('\n');
}
