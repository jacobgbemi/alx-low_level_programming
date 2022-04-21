#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _atoi(char *s);

int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}

int _atoi(char *s)
{
    int i = 0;
    int sign = 1;
    char null_b = 0;
    unsigned int total = 0;
    
    while (s[i])
    {
        if (s[i] == '-')
            sign *= -1;
        
        if (s[i] >= '0' && s[i] <= '9')
        {
            null_b = 1;
            total = total * 10 + s[i] - '0';
        }
        else if (null_b)
            break;
        i++;
    }
    
    if (sign < 0)
        total = (-total);
    
    return (total);
        
}
