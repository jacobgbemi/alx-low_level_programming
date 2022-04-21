#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
        srand (time (NULL));
 
        char *alp  = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        char *num = "0123456789";
        char *sym = "`~!@#$%^&*()_-+={}[]\\|:;\"'<>,.?/";
 
        int i = 0, x = 0, y = 0, z = 0;
 
         
        for (i = 0; i < 8; i++)
        {
                x = (rand () % 51) + 1;
                y = (rand () % 9) + 1;
                z = (rand () % 31) + 1;
                printf ("%c%c%c", alp[x], num[y], sym[z]);
        }
 
        return 0;
}
