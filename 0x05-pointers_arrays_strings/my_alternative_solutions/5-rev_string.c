#include<stdio.h>

void rev_string(char *s);

int main(void)
{
    char s[10] = "My School";
    
    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return 0;
}

void rev_string(char *s)
{
    char rev;
    int i, length = 0;
    
    while (s[length] != '\0')
        length++;
        
    while (i < length--)
    {
        rev = s[i];
        s[i++] = s[length];
        s[length] = rev;
    }
    
}
