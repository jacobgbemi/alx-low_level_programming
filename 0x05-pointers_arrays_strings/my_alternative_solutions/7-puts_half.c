#include<stdio.h>

void puts_half(char *str);

int main(void)
{
    char *str;
    
    str = "0123456789";
    puts_half(str);
    return 0;
}

void puts_half(char *str)
{
    int len, i = 0;
    
    while (str[len] != '\0')
        len++;
    for (i = len/2; i < len; i++)
        putchar(str[i]);
    putchar('\n');
}
